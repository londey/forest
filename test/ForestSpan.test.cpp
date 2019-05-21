//
// Created by nicholas on 21/05/19.
//

#include "forest/ForestSpan.hpp"

#include <catch2/catch.hpp>

namespace forest::unittests
{
  TEST_CASE("ForestSpan")
  {
    SECTION("default construct")
    {
      forest::ForestSpan<int> f{};

    }
  }
}
