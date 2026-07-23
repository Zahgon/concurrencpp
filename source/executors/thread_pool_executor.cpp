#include "concurrencpp/executors/thread_pool_executor.h"

#include <semaphore>
#include <algorithm>

using concurrencpp::thread_pool_executor;
using concurrencpp::details::idle_worker_set;
using concurrencpp::details::thread_pool_worker;

namespace concurrencpp::details {
    namespace {
        struct thread_pool_per_thread_data {
            thread_pool_worker* this_worker;
            size_t this_thread_index;
            const size_t this_thread_hashed_id;

            static size_t calculate_hashed_id() noexcept { __builtin_trap() /* STUB: not implemented */; }

            thread_pool_per_thread_data() noexcept :
                this_worker(nullptr), this_thread_index(static_cast<size_t>(-1)), this_thread_hashed_id(calculate_hashed_id()) { __builtin_trap() /* STUB: not implemented */; }
        };

        thread_local thread_pool_per_thread_data s_tl_thread_pool_data;
    }  // namespace

    class alignas(CRCPP_CACHE_LINE_ALIGNMENT) thread_pool_worker {

       private:
        std::deque<task> m_private_queue;
        std::vector<size_t> m_idle_worker_list;
        std::atomic_bool m_atomic_abort;
        thread_pool_executor& m_parent_pool;
        const size_t m_index;
        const size_t m_pool_size;
        const std::chrono::milliseconds m_max_idle_time;
        const std::string m_worker_name;
        alignas(CRCPP_CACHE_LINE_ALIGNMENT) std::mutex m_lock;
        std::deque<task> m_public_queue;
        std::binary_semaphore m_semaphore;
        bool m_idle;
        bool m_abort;
        std::atomic_bool m_task_found_or_abort;
        thread m_thread;
        const std::function<void(std::string_view thread_name)> m_thread_started_callback;
        const std::function<void(std::string_view thread_name)> m_thread_terminated_callback;

        void balance_work();

        bool wait_for_task(std::unique_lock<std::mutex>& lock);
        bool drain_queue_impl();
        bool drain_queue();

        void work_loop();

        void ensure_worker_active(bool first_enqueuer, std::unique_lock<std::mutex>& lock);

       public:
        thread_pool_worker(thread_pool_executor& parent_pool,
                           size_t index,
                           size_t pool_size,
                           std::chrono::milliseconds max_idle_time,
                           const std::function<void(std::string_view thread_name)>& thread_started_callback,
                           const std::function<void(std::string_view thread_name)>& thread_terminated_callback);

        thread_pool_worker(thread_pool_worker&& rhs) noexcept;
        ~thread_pool_worker() noexcept;

        void enqueue_foreign(concurrencpp::task& task);
        void enqueue_foreign(std::span<concurrencpp::task> tasks);
        void enqueue_foreign(std::deque<concurrencpp::task>::iterator begin, std::deque<concurrencpp::task>::iterator end);
        void enqueue_foreign(std::span<concurrencpp::task>::iterator begin, std::span<concurrencpp::task>::iterator end);

        void enqueue_local(concurrencpp::task& task);
        void enqueue_local(std::span<concurrencpp::task> tasks);

        void shutdown();

        std::chrono::milliseconds max_worker_idle_time() const noexcept;

        bool appears_empty() const noexcept;
    };
}  // namespace concurrencpp::details

idle_worker_set::idle_worker_set(size_t size) : m_approx_size(0), m_idle_flags(std::make_unique<padded_flag[]>(size)), m_size(size) { __builtin_trap() /* STUB: not implemented */; }

void idle_worker_set::set_idle(size_t idle_thread) noexcept { __builtin_trap() /* STUB: not implemented */; }

void idle_worker_set::set_active(size_t idle_thread) noexcept { __builtin_trap() /* STUB: not implemented */; }

bool idle_worker_set::try_acquire_flag(size_t index) noexcept { __builtin_trap() /* STUB: not implemented */; }

size_t idle_worker_set::find_idle_worker(size_t caller_index) noexcept { __builtin_trap() /* STUB: not implemented */; }

void idle_worker_set::find_idle_workers(size_t caller_index, std::vector<size_t>& result_buffer, size_t max_count) noexcept { __builtin_trap() /* STUB: not implemented */; }

thread_pool_worker::thread_pool_worker(thread_pool_executor& parent_pool,
                                       size_t index,
                                       size_t pool_size,
                                       std::chrono::milliseconds max_idle_time,
                                       const std::function<void(std::string_view thread_name)>& thread_started_callback,
                                       const std::function<void(std::string_view thread_name)>& thread_terminated_callback) :
    m_atomic_abort(false),
    m_parent_pool(parent_pool), m_index(index), m_pool_size(pool_size), m_max_idle_time(max_idle_time),
    m_worker_name(details::make_executor_worker_name(parent_pool.name)), m_semaphore(0), m_idle(true), m_abort(false),
    m_task_found_or_abort(false), m_thread_started_callback(thread_started_callback),
    m_thread_terminated_callback(thread_terminated_callback) { __builtin_trap() /* STUB: not implemented */; }

thread_pool_worker::thread_pool_worker(thread_pool_worker&& rhs) noexcept :
    m_parent_pool(rhs.m_parent_pool), m_index(rhs.m_index), m_pool_size(rhs.m_pool_size), m_max_idle_time(rhs.m_max_idle_time),
    m_semaphore(0), m_idle(true), m_abort(true) { __builtin_trap() /* STUB: not implemented */; }

thread_pool_worker::~thread_pool_worker() noexcept { __builtin_trap() /* STUB: not implemented */; }

void thread_pool_worker::balance_work() { __builtin_trap() /* STUB: not implemented */; }

bool thread_pool_worker::wait_for_task(std::unique_lock<std::mutex>& lock) { __builtin_trap() /* STUB: not implemented */; }

bool thread_pool_worker::drain_queue_impl() { __builtin_trap() /* STUB: not implemented */; }

bool thread_pool_worker::drain_queue() { __builtin_trap() /* STUB: not implemented */; }

void thread_pool_worker::work_loop() { __builtin_trap() /* STUB: not implemented */; }

void thread_pool_worker::ensure_worker_active(bool first_enqueuer, std::unique_lock<std::mutex>& lock) { __builtin_trap() /* STUB: not implemented */; }

void thread_pool_worker::enqueue_foreign(concurrencpp::task& task) { __builtin_trap() /* STUB: not implemented */; }

void thread_pool_worker::enqueue_foreign(std::span<concurrencpp::task> tasks) { __builtin_trap() /* STUB: not implemented */; }

void thread_pool_worker::enqueue_foreign(std::deque<task>::iterator begin, std::deque<task>::iterator end) { __builtin_trap() /* STUB: not implemented */; }

void thread_pool_worker::enqueue_foreign(std::span<concurrencpp::task>::iterator begin, std::span<concurrencpp::task>::iterator end) { __builtin_trap() /* STUB: not implemented */; }

void thread_pool_worker::enqueue_local(concurrencpp::task& task) { __builtin_trap() /* STUB: not implemented */; }

void thread_pool_worker::enqueue_local(std::span<concurrencpp::task> tasks) { __builtin_trap() /* STUB: not implemented */; }

void thread_pool_worker::shutdown() { __builtin_trap() /* STUB: not implemented */; }

std::chrono::milliseconds thread_pool_worker::max_worker_idle_time() const noexcept { __builtin_trap() /* STUB: not implemented */; }

bool thread_pool_worker::appears_empty() const noexcept { __builtin_trap() /* STUB: not implemented */; }

thread_pool_executor::thread_pool_executor(std::string_view pool_name,
                                           size_t pool_size,
                                           std::chrono::milliseconds max_idle_time,
                                           const std::function<void(std::string_view thread_name)>& thread_started_callback,
                                           const std::function<void(std::string_view thread_name)>& thread_terminated_callback) :
    derivable_executor<concurrencpp::thread_pool_executor>(pool_name),
    m_round_robin_cursor(0), m_idle_workers(pool_size), m_abort(false) { __builtin_trap() /* STUB: not implemented */; }

thread_pool_executor::~thread_pool_executor() = default;

void thread_pool_executor::find_idle_workers(size_t caller_index, std::vector<size_t>& buffer, size_t max_count) noexcept { __builtin_trap() /* STUB: not implemented */; }

thread_pool_worker& thread_pool_executor::worker_at(size_t index) noexcept { __builtin_trap() /* STUB: not implemented */; }

void thread_pool_executor::mark_worker_idle(size_t index) noexcept { __builtin_trap() /* STUB: not implemented */; }

void thread_pool_executor::mark_worker_active(size_t index) noexcept { __builtin_trap() /* STUB: not implemented */; }

void thread_pool_executor::enqueue(concurrencpp::task task) { __builtin_trap() /* STUB: not implemented */; }

void thread_pool_executor::enqueue(std::span<concurrencpp::task> tasks) { __builtin_trap() /* STUB: not implemented */; }

int thread_pool_executor::max_concurrency_level() const noexcept { __builtin_trap() /* STUB: not implemented */; }

bool thread_pool_executor::shutdown_requested() const { __builtin_trap() /* STUB: not implemented */; }

void thread_pool_executor::shutdown() { __builtin_trap() /* STUB: not implemented */; }

std::chrono::milliseconds thread_pool_executor::max_worker_idle_time() const noexcept { __builtin_trap() /* STUB: not implemented */; }
