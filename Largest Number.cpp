#include <iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"Enter three numbers: ";
	cin>>a>>b>>c;
	if(a>=b&&b>=c){
		cout<<"Largest Number: "<<a<<endl;
	}
	else if(b>=a&&b>=c){
		cout<<"Largest Number: "<<b<<endl;
	}
	else{
		cout<<"Largest Number: "<<c<<endl;
	}
	return 0;
}
