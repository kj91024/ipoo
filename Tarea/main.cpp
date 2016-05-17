#include <iostream>
using namespace std;

class opBasic{
	public:
		/*Operaciones basicas*/
		/**Suma dos valores pasados por parametro*/
		double Suma(const double a,const double b){return a + b;}
		/**Resta dos valores el primero menos el segundo*/
		double Resta(const double a,const double b){return a - b;}
		/**Divide dos valores, verifica si hay division entre cero*/
		double Division(const double num,const double den){
			if(den > 0)
				return num/den;
			else
				cout << "Division entre cero" << endl;
		}
};
class opAdvanced{
	public:
		/**Calcula la Potencia de dos numeros a partir de los parametros*/
		double Potencia(const double base,const int expo){
			int n = expo, mul = 1;
			if(expo > 0){
				for(;n-- > 0;)
					mul *= base;
				return mul;
			}else 
				cout << "Exponente es menor a cero" << endl;
		}
};

class Calc:opBasic,opAdvanced{
	private: 
		double a,b;

	public:
		/*Constructor*/
		Calc(){	cout << "Debe colocar los valores en el constructor"<<endl; }
 		Calc(double x,double y): a(x),b(y) {}


 		/*Getting de los valores privados*/
 		/**Obtiene el valor de "a"*/
 		double getA(void){return a;}
 		/**Obtiene el valor de "b"*/
 		double getB(void){return b;}


 		/*Setting de los valores privados*/
 		/**Asigna un valor de A*/
 		void setA(double x){ a = x;}
 		/**Asigna un valor de B */
 		void setB(double x){ b = x;}


 		/*Funciones de Calc*/
 		/**Este metodo cambia los valores de "a" y "b"*/
		void swap(void){
			double c = a;
			a = b;
			b = c;
		}


		/*Getting de las operaciones basicas de una calculadora*/
		/**Optiene el valor de la suma*/
		double getSuma(void){ return Suma(a,b);}
		/**Optiene el valor de la resta*/
		int getResta(void){ return Resta(a,b);}
		/**Optiene el valor de la Division*/
		double getDivision(void){ return Division(a,b);}
		/*Getting de las operaciones avanzadas de una calculadora*/
		double getPotencia(void){ return Potencia(a,b);}
};

int main(){
	Calc c(2,3);
	cout << c.getSuma() << endl;
	cout << c.getResta() << endl;
	c.swap();
	cout << c.getDivision()	<< endl;
	c.swap();
	cout << c.getPotencia()	<< endl;
}