#include "concurrencpp/results/resume_on.h"
#include "concurrencpp/threads/constants.h"
#include "concurrencpp/threads/async_lock.h"
#include "concurrencpp/executors/executor.h"

using concurrencpp::async_lock;
using concurrencpp::scoped_async_lock;
using concurrencpp::details::async_lock_awaiter;

/*
    async_lock_awaiter
*/

async_lock_awaiter::async_lock_awaiter(async_lock& parent, std::unique_lock<std::mutex>& lock) noexcept :
    m_parent(parent), m_lock(std::move(lock)) { __builtin_trap() /* STUB: not implemented */; }

void async_lock_awaiter::await_suspend(coroutine_handle<void> handle) { __builtin_trap() /* STUB: not implemented */; }

void async_lock_awaiter::retry() noexcept { __builtin_trap() /* STUB: not implemented */; }

/*
    async_lock
*/

async_lock::~async_lock() noexcept { __builtin_trap() /* STUB: not implemented */; }

concurrencpp::lazy_result<scoped_async_lock> async_lock::lock_impl(std::shared_ptr<executor> resume_executor, bool with_raii_guard) { __builtin_trap() /* STUB: not implemented */; }

concurrencpp::lazy_result<scoped_async_lock> async_lock::lock(std::shared_ptr<executor> resume_executor) { __builtin_trap() /* STUB: not implemented */; }

concurrencpp::lazy_result<bool> async_lock::try_lock() { __builtin_trap() /* STUB: not implemented */; }

void async_lock::unlock() { __builtin_trap() /* STUB: not implemented */; }

/*
 *  scoped_async_lock
 */

scoped_async_lock::scoped_async_lock(scoped_async_lock&& rhs) noexcept :
    m_lock(std::exchange(rhs.m_lock, nullptr)), m_owns(std::exchange(rhs.m_owns, false)) { __builtin_trap() /* STUB: not implemented */; }

scoped_async_lock::scoped_async_lock(async_lock& lock, std::defer_lock_t) noexcept : m_lock(&lock), m_owns(false) { __builtin_trap() /* STUB: not implemented */; }

scoped_async_lock::scoped_async_lock(async_lock& lock, std::adopt_lock_t) noexcept : m_lock(&lock), m_owns(true) { __builtin_trap() /* STUB: not implemented */; }

scoped_async_lock::~scoped_async_lock() noexcept { __builtin_trap() /* STUB: not implemented */; }

concurrencpp::lazy_result<void> scoped_async_lock::lock(std::shared_ptr<executor> resume_executor) { __builtin_trap() /* STUB: not implemented */; }

concurrencpp::lazy_result<bool> scoped_async_lock::try_lock() { __builtin_trap() /* STUB: not implemented */; }

void scoped_async_lock::unlock() { __builtin_trap() /* STUB: not implemented */; }

bool scoped_async_lock::owns_lock() const noexcept { __builtin_trap() /* STUB: not implemented */; }

scoped_async_lock::operator bool() const noexcept { __builtin_trap() /* STUB: not implemented */; }

void scoped_async_lock::swap(scoped_async_lock& rhs) noexcept { __builtin_trap() /* STUB: not implemented */; }

async_lock* scoped_async_lock::release() noexcept { __builtin_trap() /* STUB: not implemented */; }

async_lock* scoped_async_lock::mutex() const noexcept { __builtin_trap() /* STUB: not implemented */; }