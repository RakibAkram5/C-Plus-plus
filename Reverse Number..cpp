#include <iostream>
using namespace std;
int main(){
	int number;
	int rev=0;
	cout<<"Enter 5 Digit Number: ";
	cin>>number;
	while(number>0){
		int digit=number%10;
		rev=rev*10+digit;
		number=number/10;
	}
	cout<<"Reversed Number: "<<rev<<endl;
	return 0;
}
