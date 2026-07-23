#include "concurrencpp/results/impl/result_state.h"
#include "concurrencpp/results/impl/shared_result_state.h"

using concurrencpp::details::result_state_base;

void result_state_base::assert_done() const noexcept { __builtin_trap() /* STUB: not implemented */; }

void result_state_base::wait() { __builtin_trap() /* STUB: not implemented */; }

bool result_state_base::await(coroutine_handle<void> caller_handle) noexcept { __builtin_trap() /* STUB: not implemented */; }

result_state_base::pc_state result_state_base::when_any(const std::shared_ptr<when_any_context>& when_any_state) noexcept { __builtin_trap() /* STUB: not implemented */; }

void concurrencpp::details::result_state_base::share(const std::shared_ptr<shared_result_state_base>& shared_result_state) noexcept { __builtin_trap() /* STUB: not implemented */; }

void result_state_base::try_rewind_consumer() noexcept { __builtin_trap() /* STUB: not implemented */; }
