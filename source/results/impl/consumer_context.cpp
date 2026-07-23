#include "concurrencpp/results/impl/consumer_context.h"

#include "concurrencpp/executors/executor.h"
#include "concurrencpp/results/impl/shared_result_state.h"

using concurrencpp::details::when_any_context;
using concurrencpp::details::consumer_context;
using concurrencpp::details::await_via_functor;
using concurrencpp::details::result_state_base;

namespace concurrencpp::details {
    namespace {
        template<class type, class... argument_type>
        void build(type& o, argument_type&&... arguments) noexcept { __builtin_trap() /* STUB: not implemented */; }

        template<class type>
        void destroy(type& o) noexcept { __builtin_trap() /* STUB: not implemented */; }
    }  // namespace
}  // namespace concurrencpp::details

/*
 * await_via_functor
 */

await_via_functor::await_via_functor(coroutine_handle<void> caller_handle, bool* interrupted) noexcept :
    m_caller_handle(caller_handle), m_interrupted(interrupted) { __builtin_trap() /* STUB: not implemented */; }

await_via_functor::await_via_functor(await_via_functor&& rhs) noexcept :
    m_caller_handle(std::exchange(rhs.m_caller_handle, {})), m_interrupted(std::exchange(rhs.m_interrupted, nullptr)) { __builtin_trap() /* STUB: not implemented */; }

await_via_functor ::~await_via_functor() noexcept { __builtin_trap() /* STUB: not implemented */; }

void await_via_functor::operator()() noexcept { __builtin_trap() /* STUB: not implemented */; }

/*
 * when_any_context
 */

/*
 *   k_processing -> k_done_processing -> (completed) result_state_base*
 *     |                                             ^
 *     |                                             |
 *     ----------------------------------------------
 */

const result_state_base* when_any_context::k_processing = reinterpret_cast<result_state_base*>(-1);
const result_state_base* when_any_context::k_done_processing = nullptr;

when_any_context::when_any_context(coroutine_handle<void> coro_handle) noexcept : m_status(k_processing), m_coro_handle(coro_handle) { __builtin_trap() /* STUB: not implemented */; }

bool when_any_context::any_result_finished() const noexcept { __builtin_trap() /* STUB: not implemented */; }

bool when_any_context::finish_processing() noexcept { __builtin_trap() /* STUB: not implemented */; }

void when_any_context::try_resume(result_state_base& completed_result) noexcept { __builtin_trap() /* STUB: not implemented */; }

bool when_any_context::resume_inline(result_state_base& completed_result) noexcept { __builtin_trap() /* STUB: not implemented */; }

const result_state_base* when_any_context::completed_result() const noexcept { __builtin_trap() /* STUB: not implemented */; }

/*
 * consumer_context
 */

consumer_context::~consumer_context() noexcept { __builtin_trap() /* STUB: not implemented */; }

void consumer_context::destroy() noexcept { __builtin_trap() /* STUB: not implemented */; }

void consumer_context::clear() noexcept { __builtin_trap() /* STUB: not implemented */; }

void consumer_context::set_await_handle(coroutine_handle<void> caller_handle) noexcept { __builtin_trap() /* STUB: not implemented */; }

void consumer_context::set_wait_for_context(const std::shared_ptr<std::binary_semaphore>& wait_ctx) noexcept { __builtin_trap() /* STUB: not implemented */; }

void consumer_context::set_when_any_context(const std::shared_ptr<when_any_context>& when_any_ctx) noexcept { __builtin_trap() /* STUB: not implemented */; }

void concurrencpp::details::consumer_context::set_shared_context(const std::shared_ptr<shared_result_state_base>& shared_ctx) noexcept { __builtin_trap() /* STUB: not implemented */; }

void consumer_context::resume_consumer(result_state_base& self) const { __builtin_trap() /* STUB: not implemented */; }