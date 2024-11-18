#include <iostream>
using namespace std;
int main(){
	int arr[10]={2,4,5,66,75,8,53,11,3,45};
	int max=INT_MIN;
	int min=INT_MAX;
	for(int i=0;i<10;i++){
		if(arr[i]>max){
			max=arr[i];
		}
		if(arr[i]<min){
			min=arr[i];
		}
	}
	cout<<"Minimum Number is Array is= "<<min<<endl;
	cout<<"Maximum Number is Array is= "<<max<<endl;
	return 0;
	
}
