# include <iostream> // Header
using namespace std; // Namensraum finden
# define CATCH_CONFIG_RUNNER
# include <catch.hpp>

unsigned int factorial (unsigned int a) {
    if (a < 1)
      return 1;
    int temp = 1;
    for (unsigned int i = 1; i <= a; i++){
        temp = i * temp;
        } 
    
    return temp;
}
   

TEST_CASE ("describe_factorial", "[factorial]")
{
REQUIRE (factorial (3) == 6); 
REQUIRE (factorial (8) == 40320); 

}

int main(int argc, char* argv[])
{
  return Catch::Session().run(argc, argv);
}