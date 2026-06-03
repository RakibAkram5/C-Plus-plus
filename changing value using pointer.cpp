#include<iostream>
using namespace std;
int main(){
	int a=5;
	int *ptr=&a;
	*ptr=20;
	cout<<a;
	
	
	return 0;
}
