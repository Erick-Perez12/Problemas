#include <iostream>
using namespace std;
//problema 10bool esPrimo(int numero) {
  if (numero == 0 || numero == 1 || numero == 4) return false;
  for (int x = 2; x < numero / 2; x++) {
    if (numero % x == 0) return false;
  }
  return true;
}
int main(){
	int s=0;
	long long n=2000001;
	for(int i=1;i<n;i++){
		if(esPrimo(i)){
			s+=i;
		}
	}
	cout<<"Suma por debajo del numero: "<<s;
	return 0;
}
