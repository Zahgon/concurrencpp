#include "concurrencpp/task.h"
#include "concurrencpp/results/impl/consumer_context.h"

#include <cstring>

using concurrencpp::task;
using concurrencpp::details::vtable;

static_assert(sizeof(task) == concurrencpp::details::task_constants::total_size,
              "concurrencpp::task - object size is bigger than a cache-line.");

using concurrencpp::details::callable_vtable;
using concurrencpp::details::await_via_functor;

namespace concurrencpp::details {
    namespace {
        class coroutine_handle_functor {

           private:
            coroutine_handle<void> m_coro_handle;

           public:
            coroutine_handle_functor() noexcept : m_coro_handle() { __builtin_trap() /* STUB: not implemented */; }

            coroutine_handle_functor(const coroutine_handle_functor&) = delete;
            coroutine_handle_functor& operator=(const coroutine_handle_functor&) = delete;

            coroutine_handle_functor(coroutine_handle<void> coro_handle) noexcept : m_coro_handle(coro_handle) { __builtin_trap() /* STUB: not implemented */; }

            coroutine_handle_functor(coroutine_handle_functor&& rhs) noexcept : m_coro_handle(std::exchange(rhs.m_coro_handle, {})) { __builtin_trap() /* STUB: not implemented */; }

            ~coroutine_handle_functor() noexcept { __builtin_trap() /* STUB: not implemented */; }

            void execute_destroy() noexcept { __builtin_trap() /* STUB: not implemented */; }

            void operator()() noexcept { __builtin_trap() /* STUB: not implemented */; }
        };
    }  // namespace

}  // namespace concurrencpp::details

using concurrencpp::details::coroutine_handle_functor;

void task::build(task&& rhs) noexcept { __builtin_trap() /* STUB: not implemented */; }

void task::build(details::coroutine_handle<void> coro_handle) noexcept { __builtin_trap() /* STUB: not implemented */; }

bool task::contains_coroutine_handle() const noexcept { __builtin_trap() /* STUB: not implemented */; }

task::task() noexcept : m_buffer(), m_vtable(nullptr) { __builtin_trap() /* STUB: not implemented */; }

task::task(task&& rhs) noexcept { __builtin_trap() /* STUB: not implemented */; }

task::task(details::coroutine_handle<void> coro_handle) noexcept { __builtin_trap() /* STUB: not implemented */; }

task::~task() noexcept { __builtin_trap() /* STUB: not implemented */; }

void task::operator()() { __builtin_trap() /* STUB: not implemented */; }

task& task::operator=(task&& rhs) noexcept { __builtin_trap() /* STUB: not implemented */; }

void task::clear() noexcept { __builtin_trap() /* STUB: not implemented */; }

task::operator bool() const noexcept { __builtin_trap() /* STUB: not implemented */; }
