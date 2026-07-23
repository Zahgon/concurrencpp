#include "concurrencpp/runtime/runtime.h"
#include "concurrencpp/runtime/constants.h"

#include "concurrencpp/executors/constants.h"
#include "concurrencpp/executors/inline_executor.h"
#include "concurrencpp/executors/thread_pool_executor.h"
#include "concurrencpp/executors/thread_executor.h"
#include "concurrencpp/executors/worker_thread_executor.h"
#include "concurrencpp/executors/manual_executor.h"

#include "concurrencpp/timers/timer_queue.h"

#include <algorithm>

namespace concurrencpp::details {
    namespace {
        size_t default_max_cpu_workers() noexcept { __builtin_trap() /* STUB: not implemented */; }

        size_t default_max_background_workers() noexcept { __builtin_trap() /* STUB: not implemented */; }

        constexpr auto k_default_max_worker_wait_time = std::chrono::seconds(consts::k_max_threadpool_worker_waiting_time_sec);
    }  // namespace
}  // namespace concurrencpp::details

using concurrencpp::runtime;
using concurrencpp::runtime_options;
using concurrencpp::details::executor_collection;

/*
        executor_collection;
*/

void executor_collection::register_executor(std::shared_ptr<executor> executor) { __builtin_trap() /* STUB: not implemented */; }

void executor_collection::shutdown_all() { __builtin_trap() /* STUB: not implemented */; }

/*
        runtime_options
*/

runtime_options::runtime_options() noexcept :
    max_cpu_threads(details::default_max_cpu_workers()),
    max_thread_pool_executor_waiting_time(details::k_default_max_worker_wait_time),
    max_background_threads(details::default_max_background_workers()),
    max_background_executor_waiting_time(details::k_default_max_worker_wait_time),
    max_timer_queue_waiting_time(std::chrono::seconds(details::consts::k_max_timer_queue_worker_waiting_time_sec)) { __builtin_trap() /* STUB: not implemented */; }

/*
        runtime
*/

runtime::runtime() : runtime(runtime_options()) { __builtin_trap() /* STUB: not implemented */; }

runtime::runtime(const runtime_options& options) { __builtin_trap() /* STUB: not implemented */; }

concurrencpp::runtime::~runtime() noexcept { __builtin_trap() /* STUB: not implemented */; }

std::shared_ptr<concurrencpp::timer_queue> runtime::timer_queue() const noexcept { __builtin_trap() /* STUB: not implemented */; }

std::shared_ptr<concurrencpp::inline_executor> runtime::inline_executor() const noexcept { __builtin_trap() /* STUB: not implemented */; }

std::shared_ptr<concurrencpp::thread_pool_executor> runtime::thread_pool_executor() const noexcept { __builtin_trap() /* STUB: not implemented */; }

std::shared_ptr<concurrencpp::thread_pool_executor> runtime::background_executor() const noexcept { __builtin_trap() /* STUB: not implemented */; }

std::shared_ptr<concurrencpp::thread_executor> runtime::thread_executor() const noexcept { __builtin_trap() /* STUB: not implemented */; }

std::shared_ptr<concurrencpp::worker_thread_executor> runtime::make_worker_thread_executor() { __builtin_trap() /* STUB: not implemented */; }

std::shared_ptr<concurrencpp::manual_executor> runtime::make_manual_executor() { __builtin_trap() /* STUB: not implemented */; }

std::tuple<unsigned int, unsigned int, unsigned int> runtime::version() noexcept { __builtin_trap() /* STUB: not implemented */; }
