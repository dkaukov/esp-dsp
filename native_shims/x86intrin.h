#pragma once

#if defined(__i386__) || defined(__x86_64__)
#if defined(__has_include_next)
#if __has_include_next(<x86intrin.h>)
#include_next <x86intrin.h>
#else
#include <immintrin.h>
#endif
#else
#include <immintrin.h>
#endif
#else
static inline unsigned long long __rdtsc(void)
{
    return 0ULL;
}
#endif
