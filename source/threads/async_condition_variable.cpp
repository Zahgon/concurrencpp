#include "concurrencpp/results/resume_on.h"
#include "concurrencpp/threads/constants.h"
#include "concurrencpp/threads/async_condition_variable.h"

using concurrencpp::executor;
using concurrencpp::lazy_result;
using concurrencpp::scoped_async_lock;
using concurrencpp::async_condition_variable;

using concurrencpp::details::cv_awaiter;

/*
    cv_awaiter
*/

cv_awaiter::cv_awaiter(async_condition_variable& parent, scoped_async_lock& lock) noexcept : m_parent(parent), m_lock(lock) { __builtin_trap() /* STUB: not implemented */; }

void cv_awaiter::await_suspend(details::coroutine_handle<void> caller_handle) { __builtin_trap() /* STUB: not implemented */; }

void cv_awaiter::resume() noexcept { __builtin_trap() /* STUB: not implemented */; }

/*
    async_condition_variable
*/

async_condition_variable::~async_condition_variable() noexcept { __builtin_trap() /* STUB: not implemented */; }

void async_condition_variable::verify_await_params(const std::shared_ptr<executor>& resume_executor, const scoped_async_lock& lock) { __builtin_trap() /* STUB: not implemented */; }

lazy_result<void> async_condition_variable::await_impl(std::shared_ptr<executor> resume_executor, scoped_async_lock& lock) { __builtin_trap() /* STUB: not implemented */; }

lazy_result<void> async_condition_variable::await(std::shared_ptr<executor> resume_executor, scoped_async_lock& lock) { __builtin_trap() /* STUB: not implemented */; }

void async_condition_variable::notify_one() { __builtin_trap() /* STUB: not implemented */; }

void async_condition_variable::notify_all() { __builtin_trap() /* STUB: not implemented */; }