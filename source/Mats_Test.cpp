# include <iostream> // Header
using namespace std; // Namensraum finden


int main (){

int n, k;
cout << "Bitte n eingeben";
cin >> n;

cout << "Bitte k eingeben";
cin >> k;

int c;
long long int temp1 = 1;
long long int temp2 = 1;
long long int temp3 = 1; 
int i = 1;
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
        temp1 = i * temp1 + temp1;
        cout << temp1 <<endl;
        }   
        i = 1;
    for (i = 1; i <= k; i++){
        temp2 = i * temp2 + temp2;
        cout << temp2 << endl;
        } 
        i = 1;
        c = n - k;
    for (i = 1; i <= c; i++){
        temp3 = i * temp3 + temp3;
        cout << temp3 << endl;
        } 
    
    ausgabe1 = temp2 * temp3;
    ausgabe = temp1/ausgabe1;
    cout << ausgabe;
    return 0;
    }
}
