#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "if.h"
#include "if_else.h"
#include "if_else_if.h"
#include "switch.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}


TEST_CASE("verify is overtime function")
{
	REQUIRE(is_overtime(35) == false);
	REQUIRE(is_overtime(40) == false);
	REQUIRE(is_overtime(41) == true);
}


TEST_CASE("verify its even function")
{
	REQUIRE(is_even(2) == true);
	REQUIRE(is_even(3) == false);
	REQUIRE(is_even(4) == true);
}

TEST_CASE("verify get generation function")
{
	REQUIRE(get_generation(1996) == "Centenial");
	REQUIRE(get_generation(2025) == "Invalid Year");
	REQUIRE(get_generation(1990) == "Millenial");
	REQUIRE(get_generation(1966) == "Generation X");
	REQUIRE(get_generation(1947) == "Baby boomer");
	REQUIRE(get_generation(1940) == "Silent Generation");
}

TEST_CASE("verify menu function")
{
	REQUIRE(menu(1) == "Option 1");
	REQUIRE(menu(2) == "Option 2");
	REQUIRE(menu(3) == "Option 3");
	REQUIRE(menu(4) == "Option 4");
	REQUIRE(menu(5) == "Invalid Option");

}