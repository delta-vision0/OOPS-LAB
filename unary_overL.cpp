#include <iostream>
using namespace std;
class Point{
    private:
        int x_cor;
    public:
        Point(int x=0): x_cor(x){};
        Point operator-()
        {
            return Point(-x_cor);
        }
        void show(){
        	cout<<"the negative of x is :"<<x_cor<<endl;
		}
};
int main() {
	Point p1(27);
	Point p2 =-p1;
	p2.show();
	
    return 0;
}
