#include <iostream>
#include <limit>
using namespace std;
void slidingWindowmaxBruteFroce(int arr[],int n,int k){
	for(int i=0;i<=n;i++){
		int maxElement=INT_MIN;
		for(int j=i;j<i+k;j++){
			maxElement=max(maxElement,arr[j]);
		}
		cout<<maxElement<<" ";
	}
	cout<<endl;
}
int main(){
	int arr[]={1,2,-1,-3,5,3,6,7};
	int n=sizeof(arr)/sizeof(arr[0]);
	int k=3;
	cout<<"Sliding Window Maximum (Brute Force): ";
	slidingWindowmaxBruteFroce(int arr,int n,int k)
}
