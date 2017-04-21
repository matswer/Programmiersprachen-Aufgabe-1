# include <iostream> // Header

using namespace std; // Namensraum finden

int main ()
{
    long long int ktZ1, i, x;
    ktZ1 = 232500000;
    x = 1;
    i = 1;
    do  {
            
            do {  
            
            i++;
            x = i;
            cout << "berechne: " << ktZ1 << "/" << i << endl; 
            } while (ktZ1%i == 0);
            
            do {
            i = 1;
            ktZ1++;
            cout << "berechne: " << ktZ1 << "/" << i << endl;
            } while (ktZ1%i != 0);
        

        } while (x <= 20);

    cout<< "Die kleinste Zahl, die durch die Zahlen 1 bis 20 teilbar ist, lautet: " << ktZ1-1 << endl;
    return 0;

}
