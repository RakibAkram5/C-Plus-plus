#include <iostream>
using namespace std;
class student{
	private:
		int rno;
		string name;
		double fee;
		public:
			student(int r , string n, double f){
				rno=r;
				name=n;
				fee=f;
			}
			student(student& t){
				rno=t.rno;
				name=t.name;
				fee=t.fee;
				cout<<"Copy constructor called";
			}
			void display(){
				cout<<rno<<"\t"<<name<<"\t"<<fee<<endl;
			}
			
};
int main(){
	student s(1001,"manjeet",10000);
	s.display();
	student manjeet(s);
	manjeet.display();
}
