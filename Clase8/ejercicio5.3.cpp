#include <iostream>
using namespace std;
class Polygon{
	protected:
		static int num = 0;
		PointArray _pa;
	public:
		Polygon(const Point &pa){_pa = pa;}
		Polygon(const Point points[], const int numPoints){
				++numPoints;
		}
		virtual double area()const = 0;
		static int getNumPolygons(){return num;}
		int getNumSides()const{return points.getSize();}
		const PointArray *getPoints()const{return &points;}
		~Polygon(){
			--num;
		}
};