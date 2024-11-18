#include <iostream>
using namespace std; 
int main(){
	int n, t1=0,t2=1,nexterm=0;
	cout<<"Enter The Number of Terms: ";
	cin>>n;
	cout<<"Fibonacci Series: "<<t1<<" , "<<t2<<", ";
	for(int i=1;i<=n-2;i++){// 1;1<=1;2
		nexterm=t1+t2;// 0+1=1
		t1=t2; //0=1
		t2=nexterm; // 0=1
		cout<<nexterm<<" , ";
	}
	return 0;
}
