//problema 6
#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int sc=0;
	int sd=0;
	int s=0;
	for(int i=1;i<101;i++){
		sc+=pow(i,2);
	}
	for(int j=1;j<101;++j){
		sd+=j;
	}
	s=pow(sd,2);
	cout<<s-sc;
	return 0;
}
