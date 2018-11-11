
add_library(forest INTERFACE)
target_include_directories(forest INTERFACE
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:${CMAKE_INSTALL_PREFIX}/include>
)
target_sources(forest INTERFACE
    ${CMAKE_CURRENT_SOURCE_DIR}/include/forest/forest.hpp
)