#include <iostream>
using namespace std;
class animal{
	public:
	void eat(){
		cout<<"Animal is eating."<<endl;
	}
};
class dog:public animal{
	public: 
	void bark(){
		cout<<"Dog is Barking.."<<endl;
	}
};
int main(){
	dog mydog;
	animal an;
	an.eat();
	mydog.eat();
	mydog.bark();
	return 0;
}
