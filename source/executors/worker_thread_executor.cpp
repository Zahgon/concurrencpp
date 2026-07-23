#include "concurrencpp/executors/worker_thread_executor.h"

#include "concurrencpp/executors/constants.h"

namespace concurrencpp::details {
    static thread_local worker_thread_executor* s_tl_this_worker = nullptr;
}  // namespace concurrencpp::details

using concurrencpp::worker_thread_executor;

worker_thread_executor::worker_thread_executor(const std::function<void(std::string_view thread_name)>& thread_started_callback,
                                               const std::function<void(std::string_view thread_name)>& thread_terminated_callback) :
    derivable_executor<concurrencpp::worker_thread_executor>(details::consts::k_worker_thread_executor_name),
    m_private_atomic_abort(false), m_semaphore(0), m_atomic_abort(false), m_abort(false),
    m_thread_started_callback(thread_started_callback), m_thread_terminated_callback(thread_terminated_callback) { __builtin_trap() /* STUB: not implemented */; }

void concurrencpp::worker_thread_executor::make_os_worker_thread() { __builtin_trap() /* STUB: not implemented */; }

bool worker_thread_executor::drain_queue_impl() { __builtin_trap() /* STUB: not implemented */; }

void worker_thread_executor::wait_for_task(std::unique_lock<std::mutex>& lock) { __builtin_trap() /* STUB: not implemented */; }

bool worker_thread_executor::drain_queue() { __builtin_trap() /* STUB: not implemented */; }

void worker_thread_executor::work_loop() { __builtin_trap() /* STUB: not implemented */; }

void worker_thread_executor::enqueue_local(concurrencpp::task& task) { __builtin_trap() /* STUB: not implemented */; }

void worker_thread_executor::enqueue_local(std::span<concurrencpp::task> tasks) { __builtin_trap() /* STUB: not implemented */; }

void worker_thread_executor::enqueue_foreign(concurrencpp::task& task) { __builtin_trap() /* STUB: not implemented */; }

void worker_thread_executor::enqueue_foreign(std::span<concurrencpp::task> tasks) { __builtin_trap() /* STUB: not implemented */; }

void worker_thread_executor::enqueue(concurrencpp::task task) { __builtin_trap() /* STUB: not implemented */; }

void worker_thread_executor::enqueue(std::span<concurrencpp::task> tasks) { __builtin_trap() /* STUB: not implemented */; }

int worker_thread_executor::max_concurrency_level() const noexcept { __builtin_trap() /* STUB: not implemented */; }

bool worker_thread_executor::shutdown_requested() const { __builtin_trap() /* STUB: not implemented */; }

void worker_thread_executor::shutdown() { __builtin_trap() /* STUB: not implemented */; }
