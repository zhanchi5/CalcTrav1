
#include <calculator.hpp>
#include <catch.hpp>

  SCENARIO("calculator summary", "[summary]") {
    float a = 2.0;
    float b = 5.0;
    
    float rv = summary(a,b);
    
      REQUIRE( rv == 7.0);
  }
   SCENARIO("calculator sub", "[sub]") {
     float a = 5.0;
     float b = 2.0;
     
     float rv = sub(a,b);
      REQUIRE (rv ==3.0);
   }
  SCENARIO("calculator multiplication", "[multiplication]") {
     float a = 5.0;
     float b = 2.0;
     
     float rv = multiplication(a,b);
      REQUIRE (rv ==10.0);
   }
  SCENARIO("calculator division", "[division]") {
     float a = 5.0;
     float b = 2.0;
     
     float rv = division(a,b);
      REQUIRE (rv ==2.5);
   }
  SCENARIO("calculator involution", "[involution]") {
     float a = 5.0;
     float b = 2.0;
     
     float rv = involution(a,b);
      REQUIRE (rv ==25.0);
   }
  SCENARIO("calculator square_root", "[square_root]") {
     float a = 16.0;
     float b = 2.0;
     
     float rv = square_root(a,b);
      REQUIRE (rv ==4.0);
   }
