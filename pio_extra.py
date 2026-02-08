Import("env")
import os
from os.path import realpath

# Add all modules/**/include as include paths
for root, dirs, files in os.walk("modules"):
    if os.path.basename(root) == "include":
        env.Append(CPPPATH=[realpath(root)])

is_native = env.get("PIOPLATFORM") == "native"

if is_native:
    # Build only portable ANSI C implementations on host
    env.Replace(SRC_FILTER=[
        "+<common/**/*.c>",
        "+<**/*_ansi.c>",
        "-<**/*.S>", "-<**/*.s>",
        "-<**/*_ae32*>", "-<**/*_aes3*>", "-<**/*_rv*>"
    ])
    env.Append(LIBS=["m"])  # libm for sin/cos/etc
else:
    # Start simple on ESP32; you may need to tune this to avoid duplicate symbols
    env.Replace(SRC_FILTER=[
        "+<common/**/*.c>",
        "+<**/*.c>",
        "-<**/*.S>", "-<**/*.s>"
    ])
