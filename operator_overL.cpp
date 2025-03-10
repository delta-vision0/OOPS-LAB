#include <iostream>
using namespace std;
class Point{
    private:
        int x_cor;
        int y_cor;
    public:
        Point(int x=0,int y=0): x_cor(x),y_cor(y){};
        Point operator-(const Point &obj)
        {
            return Point(x_cor-obj.x_cor,y_cor-obj.y_cor);
        }
        void show(){
        	cout<<"the new x is :"<<x_cor<<endl;
        	cout<<"the new y is :"<<y_cor<<endl;
		}
};
int main() {
	Point p1(10,4),p2(5,3);
	Point p3=p1-p2;
	p3.show();
	
	Point p4(25,40),p5(5,3);
	Point p6=p4-p5;
	p6.show();
    return 0;
}
