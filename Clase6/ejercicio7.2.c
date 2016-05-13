#include <stdio.h>
int swap(int *,int *);
int main(){
	int a = 0;
	int b = 3;
	swap(&a,&b);
	printf("%d | %d \n",a,b);
}
/**
 * swap()
 *
 * cambio de valiables 
 *
 * a int | puntero 
 * b int | puntero
*/
int swap(int *a,int *b){
	int c;
	c = *a;
	*a = *b;
	*b = c;
}