#include <iostream>
using namespace std;
class myclass{
	public:
		void mymethod(){
			cout<<"Hello World....";
		}
		int speed(int maxspeed){
			return maxspeed;
		}
};
int main(){
myclass obj;
obj.mymethod();
obj.speed(200);
return 0;
}
