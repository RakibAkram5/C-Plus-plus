#include <iostream>
using namespace std; 
int main(){
	int a=10;
	int *ptr=&a;
	cout<<"Value of a: "<<a<<endl;
	cout<<"Address of a: "<<&a<<endl;
	cout<<"Pointer stores address: "<<ptr<<endl;
	cout<<"value using pointer: "<<*ptr<<endl;
	
	
	return 0;
}
