#include <stdio.h>
int main(){
	int n;
	float sum;
	sum = 0;
	printf("Ingresar un numero natural: ");
	scanf("%i",&n);
	for(float i = 1; i<=n; i++){
		sum = sum + (1 / i);
	}
	printf("Numero harmonico de %i: %f\n", n, sum);
	return false;
}