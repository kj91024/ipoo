#include <stdio.h>
int main(){
	int n,c,sum;
	sum = 1;
	c = 0;
	printf("Escribe un numero entero positivo: ");
	scanf("%i",&n);

	for(int a=2; a<=n; a++){
		for(int b=1; b<=a; b++){
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
	return false;
}