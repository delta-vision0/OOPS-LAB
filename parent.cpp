//Single level inheritance 
#include <iostream>
using namespace std;
class Parent{
	public:
		int b=12;
};
class Child:public Parent{
	private:
	int a=10;
	public:
		void showdetails(){
			cout<<"value of A:"<<a<<endl;
			cout<<"value of B:"<<b<<endl;
			cout<<"product of A and B is:"<<a*b<<endl;
	}
};
int main(){
	Parent p1;
	Child c1;
	c1.showdetails();
}
