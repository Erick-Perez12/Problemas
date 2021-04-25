#include <math.h>
#include <stdio.h>
#include <iostream>
//problema 9
using namespace std;
int main()
{
	int m;
    const int suma = 1000;
    int a;
    for (a=1; a<=suma/3; a++)
    {
        int b;
        for (b=a+1; b<=suma/2; b++)
        {
            int c=suma-a-b;
            if ( a*a + b*b == c*c ){
            	cout<<"la respuesta es: "<<a*b*c;
			}

        }
    }
    return 0;
}//31875000
