#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question3.h"
#include<vector>
using std::vector;

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("Verify cookie ingredient function")
{
	vector expected_ingredients1{1.5, 1.0, 2.75};
	REQUIRE(get_cookie_ingredients(48) == expected_ingredients1);

	vector expected_ingredients2{3.0, 2.0, 5.5};
	REQUIRE(get_cookie_ingredients(96) == expected_ingredients2);

	vector expected_ingredients3{.75, .5, 1.375};
	REQUIRE(get_cookie_ingredients(24) == expected_ingredients3);
}

