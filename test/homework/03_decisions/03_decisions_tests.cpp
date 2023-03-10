#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "decisions.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify get letter grade using if")
{
	REQUIRE(get_letter_grade_using_if(100) == "A");
	REQUIRE(get_letter_grade_using_if(96) == "A");
	REQUIRE(get_letter_grade_using_if(80) == "B");
	REQUIRE(get_letter_grade_using_if(70) == "C");
	REQUIRE(get_letter_grade_using_if(60) == "D");
	REQUIRE(get_letter_grade_using_if(45) == "F");
	REQUIRE(get_letter_grade_using_if(126) == "Invalid grade");
}

TEST_CASE("Verify get letter grade using switch")
{
	REQUIRE(get_letter_grade_using_switch(95) == "A");
	REQUIRE(get_letter_grade_using_switch(85) == "B");
	REQUIRE(get_letter_grade_using_switch(75) == "C");
	REQUIRE(get_letter_grade_using_switch(65) == "D");
	REQUIRE(get_letter_grade_using_switch(50) == "F");
	REQUIRE(get_letter_grade_using_switch(126) == "Invalid grade");

}

