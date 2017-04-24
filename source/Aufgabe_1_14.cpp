# include <iostream> // Header
using namespace std; // Namensraum finden
# define CATCH_CONFIG_RUNNER
# include <catch.hpp>

int n, k;
long long int binomial (int n, int k) {
int c;
long long int temp1 = 1;
long long int temp2 = 1;
long long int temp3 = 1; 
long int i = 1;
long long int ausgabe = 1;
long long int ausgabe1 = 1;

     if ( n < k ) 
    {
       return(0) ; 
    }
    else if ( n == k ) 
    {
       return(1) ; 
    }
    else {
    
    for (i = 1; i <= n; i++){
        temp1 = i * temp1;
        }   
        i = 1;
    for (i = 1; i <= k; i++){
        temp2 = i * temp2;
        } 
        i = 1;
        c = n - k;
    for (i = 1; i <= c; i++){
        temp3 = i * temp3;
        } 
    
    ausgabe1 = temp2 * temp3;
    ausgabe = temp1/ausgabe1;
    
    return ausgabe;}
}
   

TEST_CASE ("describe_binomial", "[binomial]")
{
REQUIRE (binomial (10, 20) == 0);
REQUIRE (binomial (10, 10) == 1);
REQUIRE (binomial (20, 10) == 184756);



}

int main(int argc, char* argv[])
{
  return Catch::Session().run(argc, argv);
}