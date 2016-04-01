#include <stdio.h>
int main(){
	int x,n,m,c;
	m = 1;
	printf("# Base del exponente: ");
	scanf("%i",&x);
	printf("# Exponente: ");
	scanf("%i",&n);
	for(c=0; c<n ; c++){
		m = m * x; 
	}
	printf("Resultado: %i \n", m);
	return 0;
}