//problema 15
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
long double i=1,fact=1;
long double factorial(long double n){
	fact/=fact;
	i=1;
	while(i<=n){
		fact=fact*i;
		i++;
	}
	return fact;
}
int main(){
	long long l,a,s;
	cout<<"Largo= ";cin>>l;
	cout<<"Ancho= ";cin>>a;
    s=factorial(a+l)/(factorial(l)*factorial(a));
    cout<<"Cant. de rutas: "<<s<<"\n"; //s+1 para numeros grandes S para numeros pequeños
    return 0;
}
/*long double h=1,d=1;
long long s;
void ruta(){
	for(int i=21;i<41;i++){
		h*=i;
	}
	for(int j=1;j<21;j++){
		d*=j;
	}
	s=h/d;
	cout<<"cant. de rutas: "<<s+1;
}
int main(){
    ruta();
    return 0;
}*/
//137846528820

