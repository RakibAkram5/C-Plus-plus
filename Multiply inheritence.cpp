#include <iostream>
using namespace std;
class mammal{
	public: 
	void feed(){
		cout<<"Mammal is Feeding."<<endl;
	}
};
class bird{
	public:
		void fly(){
			cout<<"Bird is flying."<<endl;
		}
};
class bat:public mammal, public bird{
	public:
		void usesonar(){
			cout<<"Bat is using sonar."<<endl;
		}
};
int main(){
	bat mybat;
	mybat.feed();
	mybat.fly();
	mybat.usesonar();
	return 0;
}
