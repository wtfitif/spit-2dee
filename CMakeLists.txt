cmake_minimum_required(VERSION 3.20)
project(SPIT2D VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# === Options ===
option(STATIC_ENGINE "If engine library should be built static." ON)
option(BUILD_DEMO "If demo made with spit2-dee should be built." ON)

# === Subdirs ===
add_subdirectory(demo)
add_subdirectory(engine)