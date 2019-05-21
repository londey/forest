
add_executable(forest_test
  Forest.test.cpp
  main.cpp
  ForestSpan.test.cpp
  ArraySpan.test.cpp)

find_package(Catch2 CONFIG REQUIRED)
target_link_libraries(forest_test
  PRIVATE forest
  Catch2::Catch2
  )

add_test(forest_test
  forest_test
  )
