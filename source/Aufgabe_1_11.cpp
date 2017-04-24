# include <iostream> // Header
# define CATCH_CONFIG_RUNNER
# include <catch.hpp>  

using namespace std; // Namensraum finden

float a, c;

float fract (float a) {
    int   b = static_cast<int>(a);
    float d = static_cast<float>(b);
    
    c = a - d;
    return c;
    }


TEST_CASE ("describe_fract", "[fract]")
{
REQUIRE(fract(1.76) == Approx(0.76));
REQUIRE(fract(6.22) == Approx(0.22));
REQUIRE(fract(9.4234) == Approx(0.4234));
REQUIRE(fract(22.12345) == Approx(0.12345));
}

int main(int argc, char* argv[])
{
  return Catch::Session().run(argc, argv);
}