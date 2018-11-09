
add_executable(forest_test)
target_sources(forest_test
    forest.test.cpp
)

find_library(forest)
find_library(Catch2)
target_link_libraries(forest_test
    PRIVATE forest
)
