# include <iostream> // Header
using namespace std; // Namensraum finden
# define CATCH_CONFIG_RUNNER
# include <catch.hpp>

int temp, i;

int sumMultiples () {
    int temp = 0;                               
    for (i = 1; i <= 1000; i++){                        // Schleife von 1 bis 1000
        if (i%3 == 0 || i%5 == 0){                      // Oder Bedingung durch 3 oder 5 teilbar
            temp = i + temp;                            // Summiert Werte auf
        } 
    }
    return temp;
}
   

TEST_CASE ("describe_sumMultiples", "[sumMultiples]")
{
REQUIRE (sumMultiples () == 234168); 

}

int main(int argc, char* argv[])
{
  return Catch::Session().run(argc, argv);
}