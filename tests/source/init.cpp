
#include <calculator.hpp>
#include <catch.hpp>

  SCENARIO("calculator summary", "[summary]") {
    double a = 2.0;
    int b = 5;
    
    double rv = summary(a,b);
    
      REQUIRE( rv == 7.0);
  }
   SCENARIO("calculator sub", "[sub]") {
     double a = 5.0;
     int b = 2;
     
     double rv = sub(a,b);
      REQUIRE (rv ==3.0);
   }
  SCENARIO("calculator multiplication", "[multiplication]") {
     double a = 5.0;
     int b = 2.0;
     
     double rv = multiplication(a,b);
      REQUIRE (rv ==10.0);
   }
  SCENARIO("calculator division", "[division]") {
     double a = 5.0;
     int b = 2.0;
     
      double rv = *division(a,b);
      REQUIRE (rv ==2.5);
   }
  SCENARIO("calculator involution", "[involution]") {
     double a = 5.0;
     int b = 2.0;
     
     double rv = involution(a,b);
      REQUIRE (rv ==25.0);
   } 

    SCENARIO ("calculator square-root", "[square_root]"){
    double x = 0.25;
    double  rv = square_root (x);
    REQUIRE ( rv == 0.5 );
   }
