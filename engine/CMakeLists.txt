# Mínimo necessário
cmake_minimum_required(VERSION 3.20)
project(SPIT2D)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# ===== ENGINE =====
file(GLOB ENGINE_SOURCES "src/*.cpp")

if (STATIC_ENGINE)
    message("Building engine as static library.")
    add_library(spit2d_engine STATIC ${ENGINE_SOURCES})
    target_compile_definitions(spit2d_engine PUBLIC STATIC_ENGINE)
else ()
    message("Building engine as shared library.")
    add_library(spit2d_engine SHARED ${ENGINE_SOURCES}
            src/ecs.cpp
            include/ecs.h)
endif ()

# ===== INCLUDES =====
target_include_directories(spit2d_engine PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

# ===== BOOST =====
find_package(Boost REQUIRED)

if(Boost_FOUND)
    message(STATUS "Boost found at: ${Boost_INCLUDE_DIRS}")
    target_include_directories(spit2d_engine PUBLIC ${Boost_INCLUDE_DIRS})
else()
    # fallback manual se quiser garantir
    message(WARNING "Boost not found via find_package, using manual include path.")
    target_include_directories(spit2d_engine PUBLIC /usr/include)
endif()
