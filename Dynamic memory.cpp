#include <iostream>
using namespace std;
void shift_left_index(int* arr, int size, int index){
	if(index<0||index>=size){
		cout<<"Invalid Index!!"<<endl;
	}
	for(int i=index;i<size-1;i++){
		arr[i]=arr[i+1];
		
	}
	arr[size-1]=0;
}
int main(){
	int size, ind;
	cout<<"Enter the Size of Array: ";
	cin>>size;
	int* number=new int[size];
	for(int i=0;i<size;i++){
		cin>>number[i];
	}
	cout<<"Enter the Index from where the left shift shold Start: ";
	cin>>ind;
	shift_left_index(number, size, ind);
	cout<<"Array after shifting: ";
	for(int i=0;i<size;i++)
	{
		cout<<number[i]<<" ";
	}
	cout<<endl;
	delete[]number;
	return 0;
}
