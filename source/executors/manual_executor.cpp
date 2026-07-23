#include "concurrencpp/executors/constants.h"
#include "concurrencpp/executors/manual_executor.h"

using concurrencpp::manual_executor;

manual_executor::manual_executor() :
    derivable_executor<concurrencpp::manual_executor>(details::consts::k_manual_executor_name), m_abort(false), m_atomic_abort(false) { __builtin_trap() /* STUB: not implemented */; }

void manual_executor::enqueue(concurrencpp::task task) { __builtin_trap() /* STUB: not implemented */; }

void manual_executor::enqueue(std::span<concurrencpp::task> tasks) { __builtin_trap() /* STUB: not implemented */; }

int manual_executor::max_concurrency_level() const noexcept { __builtin_trap() /* STUB: not implemented */; }

size_t manual_executor::size() const { __builtin_trap() /* STUB: not implemented */; }

bool manual_executor::empty() const { __builtin_trap() /* STUB: not implemented */; }

size_t manual_executor::loop_impl(size_t max_count) { __builtin_trap() /* STUB: not implemented */; }

size_t manual_executor::loop_until_impl(size_t max_count, std::chrono::time_point<std::chrono::system_clock> deadline) { __builtin_trap() /* STUB: not implemented */; }

void manual_executor::wait_for_tasks_impl(size_t count) { __builtin_trap() /* STUB: not implemented */; }

size_t manual_executor::wait_for_tasks_impl(size_t count, std::chrono::time_point<std::chrono::system_clock> deadline) { __builtin_trap() /* STUB: not implemented */; }

bool manual_executor::loop_once() { __builtin_trap() /* STUB: not implemented */; }

bool manual_executor::loop_once_for(std::chrono::milliseconds max_waiting_time) { __builtin_trap() /* STUB: not implemented */; }

size_t manual_executor::loop(size_t max_count) { __builtin_trap() /* STUB: not implemented */; }

size_t manual_executor::loop_for(size_t max_count, std::chrono::milliseconds max_waiting_time) { __builtin_trap() /* STUB: not implemented */; }

size_t manual_executor::clear() { __builtin_trap() /* STUB: not implemented */; }

void manual_executor::wait_for_task() { __builtin_trap() /* STUB: not implemented */; }

bool manual_executor::wait_for_task_for(std::chrono::milliseconds max_waiting_time) { __builtin_trap() /* STUB: not implemented */; }

void manual_executor::wait_for_tasks(size_t count) { __builtin_trap() /* STUB: not implemented */; }

size_t manual_executor::wait_for_tasks_for(size_t count, std::chrono::milliseconds max_waiting_time) { __builtin_trap() /* STUB: not implemented */; }

void manual_executor::shutdown() { __builtin_trap() /* STUB: not implemented */; }

bool manual_executor::shutdown_requested() const { __builtin_trap() /* STUB: not implemented */; }