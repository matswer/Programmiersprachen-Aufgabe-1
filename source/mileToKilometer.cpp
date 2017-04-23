# include <iostream>
using namespace std;


int main ()
{
    float a, b, c;
    while (a != 0){

    float b = 1.60934;
    float c = 0;
    
    cout << "Berechnungsprogramm Meilen in Kilometer\n";
    cout << "Eingabe Meilen :\n";
    cin >> a;
    c = a * b;

    cout << "Umrechnung erfolgt :\n";
    cout << a << " Meilen sind umgerechnet " << c << " Kilometer\n";
    cout << "Zum beenden 0 wählen\n";}


return 0;
}