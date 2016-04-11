#include <stdio.h>
int main(){
	int sum, n, c;
	sum = 0;
	printf("%s", "Coloca un entero positivo: ");
	scanf("%i",&n);
	for(c=0;c<=n;c++){
		sum = sum + c;
	}
	printf("La suma de los enteros positivos menores que %i es: %i\n", n,sum);
	return 0;
}