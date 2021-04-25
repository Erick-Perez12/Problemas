#include <iostream>
using namespace std;
//problema 7
int *prim;
bool esPrimo(int numero) {
  if (numero == 0 || numero == 1 || numero == 4) return false;
  for (int x = 2; x < numero / 2; x++) {
    if (numero % x == 0) return false;
  }
  return true;
}
int main(){
  /*int n;
  prim=new int[n];
  cout<<"Indicar en que posicion se encuentra el numero: ";
  cin>>n;
  for(int i=1;i<=n;i++){
  	for(int j=1;j<15;j++){
  		if(esPrimo(j)){
  			prim[i]=j;
  			i+=1;
		  }
	  }
  }
cout<<prim[n];*/
int n,s;

	for(int j=1;j<100000;j++){
		n=0;
		if(n!=6){
			s=1;
			if(esPrimo(j)){
				s=s*j;
				n++;
			}
		}
		else{
			cout<<s;
		}
	}

return 0;
}
