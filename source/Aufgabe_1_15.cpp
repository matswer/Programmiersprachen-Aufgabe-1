# include <iostream> // Header
# define CATCH_CONFIG_RUNNER
using namespace std; // Namensraum finden
# include <catch.hpp>  


int number, i;
bool prime;


bool is_prime(int number)
{
    int i = 0;
    for(int i=2; i < number; i++)
    {
       if(number%i == 0)
          return false;
    } 
    return true;
}

TEST_CASE ("is_prime", "[is_prime]")
{
REQUIRE(is_prime (2) == true);
REQUIRE(is_prime (6) == false);
REQUIRE(is_prime (4) == false);
REQUIRE(is_prime (7) == true);
REQUIRE(is_prime (11) == true);
REQUIRE(is_prime (13) == true);
REQUIRE(is_prime (8) == false);
REQUIRE(is_prime (60) == false);
}


int main(int argc, char* argv[])
{
  return Catch::Session().run(argc, argv);
}