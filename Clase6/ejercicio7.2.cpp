#include <iostream>
using namespace std;
int swap(int &,int &);
int main(){
	int a = 0;
	int b = 3;
	swap(a,b);
	cout << a << " | " << b << endl;
}
/**
 * swap()
 * Cambio de variables
 *
 * a int | *
 * b int | *
*/
int swap(int &a,int &b){
	int c;
	c = a;
	a = b;
	b = c;
}