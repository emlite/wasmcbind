cmake_minimum_required(VERSION 3.20)
project(wasmcbind LANGUAGES C VERSION 0.1.2)

set(EMLITE_CLIB_ONLY ON CACHE BOOL " " FORCE)
find_package(emlite CONFIG QUIET)
if (NOT emlite_FOUND)
    add_subdirectory(emlite-cpp)
endif()

option(WASMCBIND_BUILD_WEBBIND  "Build webbind library"  ON)

if (PROJECT_IS_TOP_LEVEL)
  option(WASMCBIND_BUILD_EXAMPLES "Build examples" OFF)
endif()

add_subdirectory(jsbind)

if (WASMCBIND_BUILD_WEBBIND)
    add_subdirectory(webbind)
endif()

if (WASMCBIND_BUILD_EXAMPLES)
    add_subdirectory(examples)
endif()

include(GNUInstallDirs)
include(CMakePackageConfigHelpers)

set(wasmcbind_INSTALL_CMAKEDIR "${CMAKE_INSTALL_LIBDIR}/cmake/wasmcbind")

configure_package_config_file(
  "${CMAKE_CURRENT_LIST_DIR}/cmake/wasmcbindConfig.cmake.in"
  "${CMAKE_CURRENT_BINARY_DIR}/wasmcbindConfig.cmake"
  INSTALL_DESTINATION "${wasmcbind_INSTALL_CMAKEDIR}"
  NO_CHECK_REQUIRED_COMPONENTS_MACRO
)

write_basic_package_version_file(
  "${CMAKE_CURRENT_BINARY_DIR}/wasmcbindConfigVersion.cmake"
  VERSION ${PROJECT_VERSION}
  COMPATIBILITY SameMajorVersion
)

install(
  EXPORT wasmcbindTargets
  FILE wasmcbindTargets.cmake
  NAMESPACE wasmcbind::
  DESTINATION "${wasmcbind_INSTALL_CMAKEDIR}"
)

install(FILES
  "${CMAKE_CURRENT_BINARY_DIR}/wasmcbindConfig.cmake"
  "${CMAKE_CURRENT_BINARY_DIR}/wasmcbindConfigVersion.cmake"
  DESTINATION "${wasmcbind_INSTALL_CMAKEDIR}"
)
