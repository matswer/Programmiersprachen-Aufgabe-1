# include <iostream> // Header
using namespace std; // Namensraum finden
# define CATCH_CONFIG_RUNNER
# include <catch.hpp>

float a, c;

float fract (float a) {
    int   b = static_cast<int>(a);
    float d = static_cast<float>(b);
    
    c = a - d;
    return c;
    }

   

TEST_CASE ("describe_fract", "[fract]")
{
REQUIRE(0.76 == Approx(1.76));
REQUIRE(0.22 == Approx(6.22));

}

int main(int argc, char* argv[])
{
  return Catch::Session().run(argc, argv);
}