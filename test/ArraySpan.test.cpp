#include "forest/ArraySpan.hpp"

#include <catch2/catch.hpp>

namespace forest::unittests
{

    TEST_CASE("ArraySpan")
    {
      SECTION("default construct")
      {
        forest::ArraySpan<int> s{};
        REQUIRE(s.ptr() == nullptr);
        REQUIRE(s.size() == 0);
      }

      SECTION("construct")
      {
        std::string abc{"abc"};

        forest::ArraySpan<char> s{abc.data(), static_cast<ptrdiff_t>(abc.size())};
        REQUIRE(s.ptr() == abc.data());
        REQUIRE(s.size() == abc.size());
      }
    }

}

