#include <iostream>
using namespace std;
int main(){
	int arr[20];
	int occurrences=0,n=0, found;
	cout<<"Enter the Elements in the array: ";
	for(int i=0;i<20;i++){
		cin>>arr[i];
		if(arr[i]==-1){
			break;
		}
		n++;
	}
	cout<<"Enter the Number to count its occurrences: ";
	cin>>found;
	for(int i=0;i<20;i++){
		if(arr[i]==found){
			occurrences++;
		}
	}
	cout<<occurrences;
	
}
