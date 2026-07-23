#include "concurrencpp/timers/timer.h"
#include "concurrencpp/timers/timer_queue.h"
#include "concurrencpp/timers/constants.h"

#include "concurrencpp/errors.h"
#include "concurrencpp/results/result.h"
#include "concurrencpp/executors/executor.h"

using concurrencpp::timer;
using concurrencpp::details::timer_state;
using concurrencpp::details::timer_state_base;

timer_state_base::timer_state_base(size_t due_time,
                                   size_t frequency,
                                   std::shared_ptr<concurrencpp::executor> executor,
                                   std::weak_ptr<concurrencpp::timer_queue> timer_queue,
                                   bool is_oneshot) noexcept :
    m_timer_queue(std::move(timer_queue)),
    m_executor(std::move(executor)), m_due_time(due_time), m_frequency(frequency), m_deadline(make_deadline(milliseconds(due_time))),
    m_cancelled(false), m_is_oneshot(is_oneshot) { __builtin_trap() /* STUB: not implemented */; }

void timer_state_base::fire() { __builtin_trap() /* STUB: not implemented */; }

timer::timer(std::shared_ptr<timer_state_base> timer_impl) noexcept : m_state(std::move(timer_impl)) { __builtin_trap() /* STUB: not implemented */; }

timer::~timer() noexcept { __builtin_trap() /* STUB: not implemented */; }

void timer::throw_if_empty(const char* error_message) const { __builtin_trap() /* STUB: not implemented */; }

std::chrono::milliseconds timer::get_due_time() const { __builtin_trap() /* STUB: not implemented */; }

std::chrono::milliseconds timer::get_frequency() const { __builtin_trap() /* STUB: not implemented */; }

std::shared_ptr<concurrencpp::executor> timer::get_executor() const { __builtin_trap() /* STUB: not implemented */; }

std::weak_ptr<concurrencpp::timer_queue> timer::get_timer_queue() const { __builtin_trap() /* STUB: not implemented */; }

void timer::cancel() { __builtin_trap() /* STUB: not implemented */; }

void timer::set_frequency(std::chrono::milliseconds new_frequency) { __builtin_trap() /* STUB: not implemented */; }

timer& timer::operator=(timer&& rhs) noexcept { __builtin_trap() /* STUB: not implemented */; }
