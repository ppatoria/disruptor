#define CATCH_CONFIG_MAIN 
#include "catch2/catch.hpp"

#include "math.cpp"

using namespace disruptor;

TEST_CASE("should ceil to next power of 2", "[math]") {
    REQUIRE(math::ceil2(0) == 2);
    REQUIRE(math::ceil2(5) == 8);
    REQUIRE(math::ceil2(9) == 16);

    REQUIRE(math::ispow2(7) == false);
    REQUIRE(math::ispow2(8) == true);
}

