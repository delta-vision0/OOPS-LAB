#include <iostream>
#include <string.h>
using namespace std;
class Demo {
	private:
		int *p;
	public:
		void getDemo()
		{
			cout <<"value : "<< *p << endl;
		}
		void setDemo(int v)
		{
			*p=v;
		}
		Demo(){
			cout << "contructor called" <<endl;
			p=new int (0);
		}
		Demo(const Demo &obj){
			cout << "\ncopy contructor called" <<endl;
			p=obj.p;
		}
		~Demo(){
			cout << "\ndestructor called" <<endl;
		}
		
};
int main(){
 Demo D1;
 D1.setDemo(7);
 D1.getDemo();
 Demo D2 =D1;
 D2.setDemo(8);
 D2.getDemo();
}
