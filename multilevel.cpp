#include <iostream>
using namespace std;
class vehicle{
	public:
		void move(){
			cout<<"Vehicle is moving."<<endl;
		}
};
class car:public vehicle{
	public:
		void drive(){
			cout<<"Car is driving."<<endl;
		}
};
class sportscar:public car{
	public:
	void boost(){
		cout<<"Sports is Boosting!"<<endl;
	}
};
int main(){
	sportscar car;
	car.move();
	car.drive();
	car.boost();
	return 0;
}
