# SPDX-License-Identifier: Apache-2.0
# order of commands matters!
cmake_minimum_required(VERSION 3.20.0)

find_package(Zephyr REQUIRED HINTS $ENV{ZEPHYR_BASE})
# find_package(Zephyr)

project(blinky)

target_sources(app PRIVATE src/main.c)
