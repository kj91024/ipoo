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
};

class Triangle : public Polygon{
	public:
		Triangle( const Point &a , const Point &b , const Point & c ): Polygon ( updateConstructorPoints(a , b , c ) , 3) {}
		virtual double area()const {
			int dx01 = points . get (0) -> getX () - points . get (1) -> getX () ,
			dx12 = points . get (1) -> getX () - points . get (2) -> getX () ,
			dx20 = points . get (2) -> getX () - points . get (0) -> getX () ;
			int dy01 = points . get (0) -> getY () - points . get (1) -> getY () ,
			dy12 = points . get (1) -> getY () - points . get (2) -> getY () ,
			dy20 = points . get (2) -> getY () - points . get (0) -> getY () ;
			double a = sqrt ( dx01 * dx01 + dy01 * dy01 ) ,
			b = sqrt ( dx12 * dx12 + dy12 * dy12 ) ,
			c = sqrt ( dx20 * dx20 + dy20 * dy20 ) ;
			double s = ( a + b + c ) / 2;
			return sqrt ( s * (s - a ) * (s - b ) * (s - c ) ) ;
		}

};

void printAttributes ( Polygon * p ) {
	cout << " puntos del area son " << p - > area () << " .\n " ;
	cout << " los puntos son :\n " ;
	const PointArray * pa = p - > getPoints () ;
	for ( int i = 0; i < pa - > getSize () ; ++ i ) {
		cout << " ( " << pa - > get ( i ) -> getX () << " , " << pa - > get ( i ) ->
		getY () << " ) \n " ;
	}
}
int main ( int argc , char * argv []) {
cout << " Enter lower left and upper right coords of rectangle as
four space separated integers : " ;
int llx , lly , urx , ury ;
cin >> llx >> lly >> urx >> ury ;
Point ll ( llx , lly ) , ur ( urx , ury ) ;
Rectangle r ( ll , ur ) ;
printAttributes (& r ) ;
cout << " Enter three coords of triangle as six space separated
integers : " ;
int x1 , y1 , x2 , y2 , x3 , y3 ;
cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 ;
Point a ( x1 , y1 ) , b ( x2 , y2 ) , c ( x3 , y3 ) ;
Triangle t (a , b , c ) ;
printAttributes (& t ) ;
return 0;
}