#include "concurrencpp/timers/timer.h"
#include "concurrencpp/timers/timer_queue.h"

#include "concurrencpp/coroutines/coroutine.h"
#include "concurrencpp/executors/constants.h"
#include "concurrencpp/executors/executor.h"

#include <set>
#include <unordered_map>

#include <cassert>

using namespace std::chrono;

using concurrencpp::timer;
using concurrencpp::timer_queue;
using concurrencpp::details::timer_request;
using concurrencpp::details::timer_state_base;

using timer_ptr = timer_queue::timer_ptr;
using time_point = timer_queue::time_point;
using request_queue = timer_queue::request_queue;

namespace concurrencpp::details {
    namespace {
        struct deadline_comparator {
            bool operator()(const timer_ptr& a, const timer_ptr& b) const noexcept { __builtin_trap() /* STUB: not implemented */; }
        };

        class timer_queue_internal {
            using timer_set = std::multiset<timer_ptr, deadline_comparator>;
            using timer_set_iterator = typename timer_set::iterator;
            using iterator_map = std::unordered_map<timer_ptr, timer_set_iterator>;

           private:
            timer_set m_timers;
            iterator_map m_iterator_mapper;

            void add_timer_internal(timer_ptr new_timer) { __builtin_trap() /* STUB: not implemented */; }

            void remove_timer_internal(timer_ptr existing_timer) { __builtin_trap() /* STUB: not implemented */; }

            void process_request_queue(request_queue& queue) { __builtin_trap() /* STUB: not implemented */; }

            void reset_containers_memory() noexcept { __builtin_trap() /* STUB: not implemented */; }

           public:
            bool empty() const noexcept { __builtin_trap() /* STUB: not implemented */; }

            ::time_point process_timers(request_queue& queue) { __builtin_trap() /* STUB: not implemented */; }
        };
    }  // namespace
}  // namespace concurrencpp::details

timer_queue::timer_queue(milliseconds max_waiting_time,
                         const std::function<void(std::string_view thread_name)>& thread_started_callback,
                         const std::function<void(std::string_view thread_name)>& thread_terminated_callback) :
    m_thread_started_callback(thread_started_callback),
    m_thread_terminated_callback(thread_terminated_callback), m_atomic_abort(false), m_abort(false), m_idle(true),
    m_max_waiting_time(max_waiting_time) { __builtin_trap() /* STUB: not implemented */; }

timer_queue::~timer_queue() noexcept { __builtin_trap() /* STUB: not implemented */; }

void timer_queue::add_internal_timer(std::unique_lock<std::mutex>& lock, timer_ptr new_timer) { __builtin_trap() /* STUB: not implemented */; }

void timer_queue::remove_internal_timer(timer_ptr existing_timer) { __builtin_trap() /* STUB: not implemented */; }

void timer_queue::add_timer(std::unique_lock<std::mutex>& lock, timer_ptr new_timer) { __builtin_trap() /* STUB: not implemented */; }

void timer_queue::work_loop() { __builtin_trap() /* STUB: not implemented */; }

bool timer_queue::shutdown_requested() const noexcept { __builtin_trap() /* STUB: not implemented */; }

void timer_queue::shutdown() { __builtin_trap() /* STUB: not implemented */; }

concurrencpp::details::thread timer_queue::ensure_worker_thread(std::unique_lock<std::mutex>& lock) { __builtin_trap() /* STUB: not implemented */; }

concurrencpp::lazy_result<void> timer_queue::make_delay_object_impl(std::chrono::milliseconds due_time,
                                                                    std::shared_ptr<concurrencpp::timer_queue> self,
                                                                    std::shared_ptr<concurrencpp::executor> executor) { __builtin_trap() /* STUB: not implemented */; }

concurrencpp::lazy_result<void> timer_queue::make_delay_object(std::chrono::milliseconds due_time,
                                                               std::shared_ptr<executor> executor) { __builtin_trap() /* STUB: not implemented */; }

milliseconds timer_queue::max_worker_idle_time() const noexcept { __builtin_trap() /* STUB: not implemented */; }
