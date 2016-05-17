#include <iostream>
using namespace std;
class Point{
	private:
		int x,y;
	public:
		Point(int u,int v) : x(u), y(y) {}
		int getX() {return x;}
		void setX(int newX);
};
void setX(int newX){ x = newX;}/*Esta funcion esta fuera de la clase*/
int main(){
	Point p(5,3);
	p.setX(0);/*No puede llamar a esta clase*/
	cout << p.getX()<< " " << "\n";/*Escto esta mal se tiene que llamar por por las funciones getX y getY*/
	return 0;
}