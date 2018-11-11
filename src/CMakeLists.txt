
add_library(forest INTERFACE)
target_compile_features(forest INTERFACE cxx_std_14)
target_include_directories(forest INTERFACE
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:${CMAKE_INSTALL_PREFIX}/include>
)
target_sources(forest INTERFACE
    ${CMAKE_CURRENT_SOURCE_DIR}/include/forest/forest.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/include/forest/forest.detail.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/include/forest/subforest.hpp
)
