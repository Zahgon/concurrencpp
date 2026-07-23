#include "concurrencpp/results/impl/shared_result_state.h"

using concurrencpp::details::shared_result_state_base;

concurrencpp::details::shared_await_context* shared_result_state_base::result_ready_constant() noexcept { __builtin_trap() /* STUB: not implemented */; }

concurrencpp::result_status concurrencpp::details::shared_result_state_base::status() const noexcept { __builtin_trap() /* STUB: not implemented */; }

bool shared_result_state_base::await(shared_await_context& awaiter) noexcept { __builtin_trap() /* STUB: not implemented */; }

void concurrencpp::details::shared_result_state_base::wait() noexcept { __builtin_trap() /* STUB: not implemented */; }
