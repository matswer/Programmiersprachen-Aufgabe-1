# include <iostream> // Header
using namespace std; // Namensraum finden

float fract (float a);
float a, c;
int main()
{
    cout << "Bitte Gleitkommazahl eingeben: " << endl;
    cin >> a;
    cout<< fract (a) << endl;
}


float fract (float a) {
    int   b = static_cast<int>(a);
    float d = static_cast<float>(b);
    
    c = a - d;
    return c;
    }