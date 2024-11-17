#include <iostream>
using namespace std;
int main(){
	int arr[5];
	cout<<"Enter Elements in an Array: ";
	for(int i=0;i<5;i++){
		cin>>arr[i];
	}
	for(int i=0;i<5;i++){
		cout<<"Element On Index ["<<i<<"] is: "<<arr[i]<<endl;
	}
	return 0;
}
