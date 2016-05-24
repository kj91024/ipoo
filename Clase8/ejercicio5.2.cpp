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
		~Polygon(){
			--num;
		}
};