#include <stdio.h>
int main(){
	int n,c,sum,a,b;
	sum = 1;
	c = 0;
	printf("Escribe un numero entero positivo: ");
	scanf("%i",&n);

	for(a=2; a<=n; a++){
		for(b=1; b<=a; b++){
			if(a%b==0){
				c++;
			}
		}
		if(c == 2){
			sum = sum + a;
		}
		c = 0;
	}
	printf("%i\n",sum);
	return 0;
}