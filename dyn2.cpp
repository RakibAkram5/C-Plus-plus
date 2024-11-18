#include <iostream>
using namespace std;
int remove_value_at_index(int* arr, int size, int index){
	if(index<0||index>=size){
		cout<<"Invalid Index"<<endl;
	}
	for(int i=index;i<size-1;i++){
		arr[i]=arr[i+1];
	}
	size--;
	return size;
}
int main(){
	int size, ind;
	cout<<"Enter the Size: ";
	cin>>size;
	int* numbers=new int[size];
	cout<<"\n Enter the Elements in the Array: ";
	for(int i=0;i<size;i++){
		cin>>numbers[i];
	}
	cout<<"\n Enter the index of the Value to remove: ";
	cin>>ind;
	size=remove_value_at_index(numbers, size, ind);
	cout<<"Array after Removing the value: ";
	for(int i=0;i<size;i++){
		cout<<numbers[i]<<" ";
	}
	cout<<endl;
	delete []numbers;
	return 0;
}
