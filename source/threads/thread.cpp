#include "concurrencpp/threads/thread.h"

#include "concurrencpp/platform_defs.h"

#include <atomic>

#include "concurrencpp/runtime/constants.h"

using concurrencpp::details::thread;

namespace concurrencpp::details {
    namespace {
        std::uintptr_t generate_thread_id() noexcept { __builtin_trap() /* STUB: not implemented */; }

        struct thread_per_thread_data {
            const std::uintptr_t id = generate_thread_id();
        };

        thread_local thread_per_thread_data s_tl_thread_per_data;
    }  // namespace
}  // namespace concurrencpp::details

std::thread::id thread::get_id() const noexcept { __builtin_trap() /* STUB: not implemented */; }

std::uintptr_t thread::get_current_virtual_id() noexcept { __builtin_trap() /* STUB: not implemented */; }

bool thread::joinable() const noexcept { __builtin_trap() /* STUB: not implemented */; }

void thread::join() { __builtin_trap() /* STUB: not implemented */; }

size_t thread::hardware_concurrency() noexcept { __builtin_trap() /* STUB: not implemented */; }

#ifdef CRCPP_WIN_OS

#    include <Windows.h>

void thread::set_name(std::string_view name) noexcept { __builtin_trap() /* STUB: not implemented */; }

#elif defined(CRCPP_MINGW_OS)

#    include <pthread.h>

void thread::set_name(std::string_view name) noexcept { __builtin_trap() /* STUB: not implemented */; }

#elif defined(CRCPP_UNIX_OS)

#    include <pthread.h>

void thread::set_name(std::string_view name) noexcept { __builtin_trap() /* STUB: not implemented */; }

#elif defined(CRCPP_MAC_OS)

#    include <pthread.h>

void thread::set_name(std::string_view name) noexcept { __builtin_trap() /* STUB: not implemented */; }

#endif
