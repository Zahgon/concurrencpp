#include "concurrencpp/executors/constants.h"
#include "concurrencpp/executors/thread_executor.h"

using concurrencpp::thread_executor;

thread_executor::thread_executor(const std::function<void(std::string_view thread_name)>& thread_started_callback,
                                 const std::function<void(std::string_view thread_name)>& thread_terminated_callback) :
    derivable_executor<concurrencpp::thread_executor>(details::consts::k_thread_executor_name),
    m_abort(false), m_atomic_abort(false), m_thread_started_callback(thread_started_callback),
    m_thread_terminated_callback(thread_terminated_callback) { __builtin_trap() /* STUB: not implemented */; }

thread_executor::~thread_executor() noexcept { __builtin_trap() /* STUB: not implemented */; }

void thread_executor::enqueue_impl(std::unique_lock<std::mutex>& lock, concurrencpp::task& task) { __builtin_trap() /* STUB: not implemented */; }

void thread_executor::enqueue(concurrencpp::task task) { __builtin_trap() /* STUB: not implemented */; }

void thread_executor::enqueue(std::span<concurrencpp::task> tasks) { __builtin_trap() /* STUB: not implemented */; }

int thread_executor::max_concurrency_level() const noexcept { __builtin_trap() /* STUB: not implemented */; }

bool thread_executor::shutdown_requested() const { __builtin_trap() /* STUB: not implemented */; }

void thread_executor::shutdown() { __builtin_trap() /* STUB: not implemented */; }

void thread_executor::retire_worker(std::list<details::thread>::iterator it) { __builtin_trap() /* STUB: not implemented */; }