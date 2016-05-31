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

Point * updateConstructorPoints ( const Point & p1 , const Point & p2 ,
	const Point & p3 , const Point & p4 = Point (0 ,0) ) {
	cons tructorPoints [0] = p1 ;
	constructorPoints [1] = p2 ;
	constructorPoints [2] = p3 ;
	constructorPoints [3] = p4 ;
	return construct orPoints ;
}

class rectangle : public Polygon{
	public:
		Rectangle(const Point &ll, const Point &ur): 	Polygon (updateConstructorPoints( ll , Point ( ll . getX () , ur . getY ()),ur , Point ( ur . getX () , ll . getY ()) ) , 4) {}
		Rectangle(const int a, const int b, const int c, const int d): Polygon ( updateConstructorPoints ( Point ( llx , lly) , Point ( llx ,ury ) ,Point ( urx , ury ) ,Point ( urx ,lly ) ) , 4) {}
		virtual double area() const {
			int length = points.get(1) -> getY() - points.get (0) -> getY() ;
			int width = points.get(2) -> getX() - points.get (1) -> getX() ;
			return abs (( double ) length * width ) ;
		}
}