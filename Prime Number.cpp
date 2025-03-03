#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int n){
	if(n<=1){
		return false;
	}
	for(int i=2;i<=sqrt(n);i++){
		if(n%1==0){
			return false;
		}
	}
	return true;
}
int main(){
	int number;
	cout<<"Enter The Number: ";
	cin>>number;
	if(isPrime(number)){
		cout<<number<<" is a Prime."<<endl;
	}
	else{
		cout<<number<<" is Not a Prime."<<endl;
	}
	return 0;
}
