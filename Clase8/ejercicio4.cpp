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
class PointArray{
	private:
		Point *point;
		int size;	
	public:
		PointArray(){
			size = 0;
			point = new Point[size];
		}
		/*Creaar una copia de point*/
		PointArray(const Point pointcopy[], const int copysize){
			size = copysize;
			point = new Point[copysize];
			for(int i = 0;i< copysize;i++)
				point[i] = pointcopy[i];
		}
		/*Llamada por referencia*/
		PointArray(const PointArray &pv){
			size = pv.size;
			point = new Point[size];
			for(int i = 0; i< size; i++)
				point[i] = pv.point[i];
		}
		void resize(int newsize){
			Point *pts = new Point[newsize];
			int len = (newsize > size)? size : newsize;
			for(int i = 0;i < len;i++)
				pts[i] = point[i];
			delete[] point;
			point = pts;
			size = newsize;
		}
		~PointArray(){
			delete[] point;
		}
};
int main(){
	/*Segundo*/
	Point *p1 = new Point[1];
	PointArray pa1(p1,120);
	/*Tercero*/
	PointArray pa2(pa1);
	/*Primero*/
	pa2.resize(100);
	delete[] p1;
}