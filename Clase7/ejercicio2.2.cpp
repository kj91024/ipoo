#include <iostream>
using namespace std;
class Point{
	private:
		int x,y;
	public:
		Point(int u,int v) : x(u), y(y) {}
		int getX() {return x;}
		int getY() {return y;}
		void setX(int newX) const {x  = newX;} /* Error porque no se puede cambiar tiene const*/
};
int main(){
	Point p(5,3);
	p.setX(9001);/*Error porque no se puede cambiar el valor*/
	cout << p.getX() << " "<< p.getY();
	return 0;
}