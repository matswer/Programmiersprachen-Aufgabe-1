# include <iostream> // Header
using namespace std; // Namensraum finden
# define CATCH_CONFIG_RUNNER
# include <catch.hpp>

int a, temp, i;

int factorial (int a) {
    int temp = 1;
    for (i = 1; i <= a; i++){
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