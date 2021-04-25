#include <iostream>
//problema 3
using namespace std;
int main(){
long long num=600851475143;
for (int i=2; num>1;i++){
	while(num%i==0){
		cout<<i<<", ";
		num/=i;
	}
}
return 0;}
