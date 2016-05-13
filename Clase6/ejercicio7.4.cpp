#include <iostream>
using namespace std;
void swap ( int **x , int **y);
int main(){
	int x = 5 , y = 6;
	int *ptr1 = &x, *ptr2 = &y;
	swap(&ptr1 , &ptr2);
	cout << *ptr1 << " " << *ptr2;
}
/**
 * swap()
 * Cambio de variables
 *
 * a int | *
 * b int | *
*/
void swap ( int **x , int **y){
	int *tmp = *x;
	*x = *y;
	*y = tmp;
}