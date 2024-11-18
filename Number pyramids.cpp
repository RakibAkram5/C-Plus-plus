#include <iostream>
using namespace std;
int main(){
	int rows;
	int num=1;
	cout<<"Enter the Numbers of Rows: ";
	cin>>rows;
	for(int i=0;i<=rows;i++){
		for(int j=1;j<=rows-i;j++){
			cout<<" ";
		}
		for(int k=1;k<=i;k++){
			cout<<num<<" ";
			num++;
		}
		cout<<endl;
		
	}
	
}
