# include <iostream> // Header
# define _USE_MATH_DEFINES 
# include <cmath> 
# define CATCH_CONFIG_RUNNER
# include <catch.hpp>  

using namespace std; // Namensraum finden


int cylinder_s (int r, int h) {

    return 2 * M_PI * r * (r + h);  
}

int cylinder_v (int r, int h) {

    int v = 0;

    v = M_PI * r * r * h;
    return v;  // 2 Ausgabewerte ??
}

TEST_CASE ("describe_cylinder_s", "[cylinder_s]")
{
REQUIRE(cylinder_s (5, 5) == 314);
}
TEST_CASE ("describe_cylinder_v", "[cylinder_v]")
{
REQUIRE(cylinder_v (5, 5) == 392);
}


int main(int argc, char* argv[])
{
  return Catch::Session().run(argc, argv);
}