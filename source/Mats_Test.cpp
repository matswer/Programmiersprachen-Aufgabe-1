# include <iostream>
# include <string>

using namespace std;

int main ()

{
    string ja= "ja";
    string nein= "nein";
    string eingabe;
    cout << "Bitte gib an ob Mats dein rechtmäßiger Freund ist";
    cout << "\n ja oder nein?";
    cin >> eingabe;
    if (eingabe == ja)
    {
        cout << "\n super - Glück gehabt";
    }
    else
    {
        cout << "\n Das war leider die falsche Antwort!";
        } 

cin.sync();
cin.get();
return 0;
}