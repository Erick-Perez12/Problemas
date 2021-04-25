#include <iostream>
using namespace std;
int main()
{
    int Numero = 1;
    while (!(
        (Numero % 11 == 0) &&
        (Numero % 12 == 0) && 
        (Numero % 13 == 0) &&
        (Numero % 14 == 0) && 
        (Numero % 15 == 0) && 
        (Numero % 16 == 0) && 
        (Numero % 17 == 0) &&
        (Numero % 18 == 0) && 
        (Numero % 19 == 0) &&
        (Numero % 20 == 0)    
    ))
    {
        ++Numero;
    }
    cout << Numero << "\n";
}
