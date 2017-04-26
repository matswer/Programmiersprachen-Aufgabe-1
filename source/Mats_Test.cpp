# include <iostream> // Header
# define _USE_MATH_DEFINES 
# include <cmath> 
# define CATCH_CONFIG_RUNNER
# include <catch.hpp>  

using namespace std; // Namensraum finden


int r = 0;
int h = 0;

int cylinder_s (int r, int h) {

    int s = 0;

    s = 2 * M_PI * r * h;

    return s;  
}

TEST_CASE ("describe_cylinder_s", "[cylinder_s]")
{
REQUIRE(cylinder_s (20, 2) == 2513);
}


int cylinder_v (int r, int h) {

    int v = 0;

    v = M_PI * r * r * h;
    return v;  // 2 Ausgabewerte ??
}
