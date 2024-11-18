#include <iostream>
using namespace std;
class parent{
	public:
		int id_p;
		void printid_p(){
			cout<<"Base ID: "<<id_p<<endl;
		}
};
class child:public parent{
	public:
		int id_c;
		void printID_c(){
			cout<<"Child ID: "<<id_c<<endl;
		}
};
int main(){
	child obj1;
	obj1.id_p=7;
	obj1.printid_p();
	obj1.id_c=91;
	obj1.printID_c();
	return 0;
}
