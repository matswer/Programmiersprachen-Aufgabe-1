# include <iostream> // Header

using namespace std; // Namensraum finden

int main ()
{
    int ktZ1, i, x;
    ktZ1 = 232500000;   //Rechenzeit reduzieren
    x = 1;
    i = 1;
    do  {
            
            do {  
            
            i++;
            x = i;
            cout << "Berechne: " << ktZ1 << "/" << i << endl; 
            } while (ktZ1%i == 0 && i <= 20);
            
            do {
            i = 1;
            ktZ1++;
            cout << "Berechne: " << ktZ1 << "/" << i << endl;
            } while (ktZ1%i != 0);
        

        } while (x <= 20);

    cout<< "Die kleinste Zahl, die durch die Zahlen 1 bis 20 teilbar ist, lautet: " << ktZ1-1 << endl;
    cout<< "Beliebige Taste drücken um Programm zu beenden" << endl;
    cin.get();
    return 0;

}
