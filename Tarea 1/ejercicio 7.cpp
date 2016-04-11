#include <stdio.h>
int main(){
	int n,m,i;
	m = 1;
	printf("Coloca un numero entero positivo: ");
	scanf("%i",&n);
	for (i = 1; i <= n; i++)
	{
		m = m*i;
	}
	printf("Factorial de %i: %i\n", n,m);
	return 0;
}