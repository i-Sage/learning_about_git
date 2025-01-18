cmake_minimum_required(VERSION 3.20)

set(vcpkg "$ENV{VCPKG_ROOT}/scripts/buildsystems/vcpkg.cmake")
if(NOT CMAKE_TOOLCHAIN_FILE AND EXISTS "${vcpkg}")
  set(CMAKE_TOOLCHAIN_FILE "${vcpkg}"
      CACHE FILEPATH "CMake toolchain file")
  message(STATUS "vcpkg toolchain found: ${CMAKE_TOOLCHAIN_FILE}")
endif()

set(CMAKE_CXX_VERSION 20)
set(CMAKE_CXX_VERSION_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

project(speeding_up_iostreams CXX)
add_executable(main src/main.cc)

