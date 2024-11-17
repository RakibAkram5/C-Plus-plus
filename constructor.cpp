#include <iostream>
using namespace std;
class Car{
	public:
		string brand;
		string model;
		int year;
		Car(string b, string m,int y){
			brand=b;
			model=m;
			year=y;
		}
};
int main(){
	Car obj1("Toyota"," Cross",2024);
	Car obj2("Honda","Fit",2022);
	cout<<obj1.brand<<obj1.model<<obj1.year<<endl;
	cout<<obj2.brand<<obj2.model<<obj2.year<<endl;
}
