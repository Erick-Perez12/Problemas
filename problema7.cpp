#include <iostream>
using namespace std;
//problema 7
bool esPrimo(int numero) {
  if (numero == 0 || numero == 1 || numero == 4) return false;
  for (int x = 2; x < numero / 2; x++) {
    if (numero % x == 0) return false;
  }
  return true;
}
int main(){
int n=0;
	for(int j=2;j<500000;j++){
		if(esPrimo(j)){
			n++;
			if(n==10001){
				cout<<"el numero: "<<j;
			}
		}
	}
return 0;
}

