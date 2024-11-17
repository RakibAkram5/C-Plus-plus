#include <iostream>
using namespace std; 
int main(){
	char op;
	double num1,num2;
	cout<<"Enter operator(+,-,*,/): ";
	cin>>op;
	cout<<"Enter two Operands: ";
	cin>>num1>>num2;
	switch(op){
		case '+':
			cout<<"Result: "<<num1+num2<<endl;
			break;
			case'-':
				cout<<"Result: "<<num1-num2<<endl;
				break;
				case'*':
				cout<<"Result: "<<num1*num2<<endl;
				break;
				case'/':
					cout<<"Result: "<<num1/num2<<endl;
					break;
	}
	return 0;
}
