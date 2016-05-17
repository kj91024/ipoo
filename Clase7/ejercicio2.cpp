#include <iostream>
using namespace std;
class Point{
	private:
		int x,y;
	public:
		Point(int u, int v): x(u), y(v){}
		int getX() {return x;}
		int getY() {return y;}
		void doubleVal(){
			x *= 2;
			y *= 2;
		}
};
int main(){
	const Point myPoint(5,3)/*Falta el punto y coma*/
	myPoint.doubleVal(9);/*Esta funcion no recive parametros*/
	cout << myPoint.getX()<< "" <<myPoint.getY();
	return 0;
}