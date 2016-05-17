#include <iostream>
using namespace std;
class Point{
	private:
		int x,y;
	public:
		Point(){
			x = 0;
			y = 0;
		}
		Point(int px,int py): x(px),y(py){}
		int setX(const int new_x){x = new_x;}
		int setY(const int new_y){y = new_y;}
		int getX(void){return x;}
		int getY(void){return y;}
}; 	
int main(){
	Point point(2,6);
	cout << point.getX() << " - " << point.getY() << endl;
	point.setX(5);
	point.setY(2);
	cout << point.getX() << " - " << point.getY() << endl;
}