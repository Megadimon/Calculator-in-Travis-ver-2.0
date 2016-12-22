#include <calculator.hpp>
#include <catch.hpp>

SCENARIO("calculator sum", "[sum]") {
    float a = 9.0;
    float b = 1.0;
    
    double rv = sum( a, b );
    
	REQUIRE( rv == 10.0 );
}
SCENARIO("calculator sub", "[sub]") {
    float a = 9.0;
    float b = 1.0;
    
    double rv = sub( a, b );
    
	REQUIRE( rv == 8.0 );
}
SCENARIO("calculator mult", "[mult]") {
    float a = 9.0;
    float b = 1.0;
    
    double rv = mult( a, b );
    
	REQUIRE( rv == 9.0 );
}
SCENARIO("calculator div", "[div]") {
    float a = 9.0;
    float b = 1.0;
    
    double rv = div( a, b );
    
	REQUIRE( rv == 9.0 );
}
SCENARIO("calculator pow", "[pow]") {
    float a = 9.0;
    float b = 1.0;
    
    double rv = pow( a );
    
	REQUIRE( rv == 6561.0 );
}
SCENARIO("calculator sq", "[sq]") {
    float a = 9.0;
    float b = 1.0;
    
    double rv = sq( a );
    
	REQUIRE( rv == 3.0 );
}
