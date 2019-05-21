
#include "forest/Forest.hpp"

#include <catch2/catch.hpp>
#include <string>


TEST_CASE("forest01")
{
  SECTION("default construct")
  {
    forest::Forest<std::string> f{};
  }
}
