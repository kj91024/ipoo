#include <iostream>
using namespace std;
class Point{
	private:
		int x,y;
	public:
		Point(int u,int v) : x(u), y(y) {}
		int getX() {return x;}
		int getY() {return y;}
};
int main(){
	Point p(5,3);
	cout << p.x << " "<< p.y << "\n";/*Escto esta mal se tiene que llamar por por las funciones getX y getY*/
	return 0;
}