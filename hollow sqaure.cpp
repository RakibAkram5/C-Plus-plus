#include <iostream>
using namespace std;
int main(){
	int rows;
	cout<<"Enter the Size of Square: ";
	cin>>rows;
	int num=1;
	for(int i=1;i<=rows;i++){
		for(int j=1;j<=rows;j++){
			if(i==1||i==rows||j==1||j==rows){
				cout<<"*";
				
			}
			else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
