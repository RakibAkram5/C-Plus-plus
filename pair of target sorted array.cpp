#include <iostream>
using namespace std;
pair<int,int> findtwosum(int arr[],int n,int target){
	int start=0;
	int end=n-1;
	while(start<end){
		int current_sum=arr[start]+arr[end];
		if(current_sum==target){
			return make_pair(start,end);
		}
		else if(current_sum>target){
			start++;
		}
		else{
			end--;
		}
	}
	return make_pair(-1,-1);
}
int main(){
	int arr[]={2,5,7,15,13};
	int target=20;
	int n=sizeof(arr)/sizeof(arr[0]);
	pair<int,int> result=findtwosum(arr,n,target);
	if(result.first!=-1){
		cout<<"Indices: "<<result.first<<","<<result.second<<endl;
	}
	else{
		cout<<"No pair Found."<<endl;
	}
	return 0;
}
