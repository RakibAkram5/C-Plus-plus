#include <iostream>
using namespace std;
int main(){
		int num,num2,sum,sub,mul;
		float div;
		cout<<"Enter Number: ";
		cin>>num;
		cout<<"Enter 2nd Number: ";
		cin>>num2;
		int choice;
		do{
			cout<<"Calculator."<<endl;
			cout<<"1. Sum."<<endl;
			cout<<"2.Subtraction."<<endl;
			cout<<"3. Multiplication."<<endl;
			cout<<"4. Divison."<<endl;
			cout<<"5. Exit."<<endl;
			cout<<"Enter your Choice: ";
			cin>>choice;
			if(choice==1){
				sum=num+num2;
				cout<<"Sum of A Numbers: "<<sum<<endl;
			}
			else if(choice==2){
				sub=num-num2;
				cout<<"Subtraction of Number: "<<sub<<endl;
			}
			else if(choice==3){
				mul=num*num2;
				cout<<"Multiplication of Number: "<<mul<<endl;
			}
			else if(choice==4){
				div=num/num2;
				cout<<"Division of Number: "<<div<<endl;
			}
			else{
				cout<<"Exiting."<<endl;
				break;
			}
		}while(choice!=5);
}
