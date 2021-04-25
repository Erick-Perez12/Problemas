#include <iostream>
using namespace std;
int main()
{
    int priFib = 0;
    int segFib = 0;
    int tercFib = 1;
    int suma=0;
    while(tercFib <= 4000000)
    {
        suma += (tercFib % 2 == 0) ?
            tercFib : 0;
        priFib = segFib;
        segFib = tercFib;
        tercFib = priFib + segFib;
    }
    
    cout << suma<< "\n";
}
