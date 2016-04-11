#include <stdio.h>
int main(){
	int n,i;
	float sum;
	sum = 0;
	printf("Ingresar un numero natural: ");
	scanf("%i",&n);
	for(i = 1; i<=n; i++){
		sum = sum + (1.0 / i);
	}
	printf("Numero harmonico de %i: %f\n", n, sum);
	return 0;
}