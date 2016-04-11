#include <stdio.h>
int main(){
	int c;
	while(1){
  		printf ("Coloca un numero natural que termine en CERO: ");
  		scanf("%i",&c);
  		printf("Al cuadrado es: %i\n", c*c);
  	}
  	return 0;
}