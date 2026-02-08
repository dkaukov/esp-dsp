#pragma once
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

// Native host fallback for code paths that expect ESP-IDF cpu cycle API.
static inline uint32_t esp_cpu_get_ccount(void)
{
#if defined(__has_builtin)
#if __has_builtin(__builtin_readcyclecounter)
    return (uint32_t)__builtin_readcyclecounter();
#endif
#endif
    return 0;
}

#ifdef __cplusplus
}
#endif
