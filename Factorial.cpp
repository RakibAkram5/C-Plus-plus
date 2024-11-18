#include <iostream>
using namespace std;
int main(){
	int n;
	long long factorail=1;
	cout<<"Enter a Number: ";
	cin>>n;
	for(int i=1;i<=n;i++){
		factorail*=i;
	}
	cout<<"Factorial of "<<n<<"! = "<<factorail<<endl;
	return 0;
}
