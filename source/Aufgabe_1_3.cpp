# include <iostream> // Header

using namespace std; // Namensraum finden

int main ()
{
    int ktZ1, i, x;
    ktZ1 = 232500000;   //Rechenzeit reduzieren
    x = 1;
    i = 1;
    do  {
            
            do {  // Teilt Zahl durch 1 - 20
            
            i++;
            x = i;
            cout << "Berechne: " << ktZ1 << "/" << i << endl; 
            } while (ktZ1%i == 0 && i <= 20);
            
            do {        // Erhöht Zahl um eins
            i = 1;
            ktZ1++;
            cout << "Berechne: " << ktZ1 << "/" << i << endl;
            } while (ktZ1%i != 0);
        

        } while (x <= 20);  // Beendet Schleife wenn durch alle 20 teilbar

    cout<< "Die kleinste Zahl, die durch die Zahlen 1 bis 20 teilbar ist, lautet: " << ktZ1-1 << endl; //Ausgabe
    cout<< "Beliebige Taste drücken um Programm zu beenden" << endl; //Beenden
    cin.get(); //Unterbricht Programm
    return 0;

}
