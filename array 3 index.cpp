#include <iostream>
using namespace std;
int main(){
	int arr[10];
	cout<<"Enter Array of 10: ";
	for(int i=0;i<10;i++){
		cin>>arr[i];
	}
	for (int i=9;i>=0;i--){
		if(arr[i]%3==0){
			cout<<i<<" ";
		}
	}
}
