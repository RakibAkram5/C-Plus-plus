#include <iostream>
using namespace std;
bool evenodd(int n){
	if(n==0){
		return false;
	}
	else if(n%2==0){
		return true;
	}
	else{
		return false;
	}
}
int main(){
	int num;
	cout<<"Enter Number: ";
	cin>>num;
	cout<<"Number is: "<<evenodd(num);
	return 0;
}
