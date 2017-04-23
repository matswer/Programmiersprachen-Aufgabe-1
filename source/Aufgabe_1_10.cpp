# include <iostream> // Header
using namespace std; // Namensraum finden
# define CATCH_CONFIG_RUNNER
# include <catch.hpp>

int temp, i;

int sumMultiples () {
    int temp = 0;
    for (i = 1; i <= 1000; i++){
        if (i%3 == 0 || i%5 == 0){
            temp = i + temp;
        } 
    }
    return temp;
}
   

TEST_CASE ("describe_sumMultiples", "[sumMultiples]")
{
REQUIRE (sumMultiples ()); 

}

int main(int argc, char* argv[])
{
  return Catch::Session().run(argc, argv);
}