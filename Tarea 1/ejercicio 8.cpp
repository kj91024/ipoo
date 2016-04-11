#include <stdio.h>
int main(){
	int a,b,c;
	printf("Primer numero: ");
	scanf("%i",&a);
	printf("Segundo numero: ");
	scanf("%i",&b);
	printf("Tercer numero: ");
	scanf("%i",&c);
	if(a > b){
		if(a > c){
			if(b > c){
				printf("%i %i %i\n", c, b, a);
			}else{
				printf("%i %i %i\n", b, c, a);
			}
		}else{
			printf("%i %i %i\n", b, a, c);
		}
	}else if(b > c){
		if(a > c){
			printf("%i %i %i\n", c, a, b);
		}else{
			printf("%i %i %i\n", a, c, b);
		}
	}else{
		printf("%i %i %i\n", a, b, c);
	}
	return 0;
}