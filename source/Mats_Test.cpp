# include <iostream> // Header
using namespace std; // Namensraum finden
# include <cmath>

int checksum (int c);
int main ()
{
    int c = 0;
    cout << "Bitte Zahl eingeben" << endl;
    cin >> c;
    cout << checksum (c) << endl;
    return 0;
}


int count_numbers (int c) {
   int count =0;
   while (c !=0) {   
      count++;  
      c/=10;
   } 
   return count;
}
int temp1, temp2, temp3, laenge;
int checksum (int c) 
{
    laenge = count_numbers (c)-1;
    int temp1 = 0;
    int temp2 = 0;
    int temp3 = 0;
    for(int i = laenge;i >= 0; i--){

        temp1 = c/pow(10, i);
        temp2 = temp1 * pow(10, i);
        c = c - temp2;            
        temp3 = temp1 + temp3;

        }
  return temp3;
}