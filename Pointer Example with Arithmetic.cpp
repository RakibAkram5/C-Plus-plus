#include <iostream>
using namespace std; 
int main(){
	int arr[3]={5,10,15};
	int *ptr=arr;
	cout<<*ptr<<endl;
	ptr++;
	cout<<*ptr<<endl;
	return 0;
}
