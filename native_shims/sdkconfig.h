#pragma once

// Native host defaults for esp-dsp conditional compilation.
#ifndef CONFIG_IDF_TARGET_ESP32
#define CONFIG_IDF_TARGET_ESP32 0
#endif
#ifndef CONFIG_IDF_TARGET_ESP32S2
#define CONFIG_IDF_TARGET_ESP32S2 0
#endif
#ifndef CONFIG_IDF_TARGET_ESP32S3
#define CONFIG_IDF_TARGET_ESP32S3 0
#endif
#ifndef CONFIG_IDF_TARGET_ESP32C3
#define CONFIG_IDF_TARGET_ESP32C3 0
#endif
#ifndef CONFIG_IDF_TARGET_ESP32C6
#define CONFIG_IDF_TARGET_ESP32C6 0
#endif
#ifndef CONFIG_DSP_MAX_FFT_SIZE
#define CONFIG_DSP_MAX_FFT_SIZE 4096
#endif
