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
		Point(int a,int b): x(a),y(b){}
}; 	
int main(){
	Point point(2,6);
	Point p();
}