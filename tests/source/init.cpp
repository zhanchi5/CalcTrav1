
#include <calculator.hpp>
#include <catch.hpp>

SCENARIO("calculator sum", "[sum]") {
    int x = 3;
    int y = 4;
    
    int rv = sum( x, y );
    
	REQUIRE( rv == 7);
}
