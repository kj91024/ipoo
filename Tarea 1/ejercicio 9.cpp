#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a,b,c,d,e,i,j,potencia,min,primo,mcd,primero,segundo,tercero,cuarto;

	e = 0;
	mcd = 1;

	printf("Primer numero: ");
	scanf("%i",&a);
	primero = a;
	printf("Segundo numero: ");
	scanf("%i",&b);
	segundo = b;
	printf("Tercer numero: ");
	scanf("%i",&c);
	tercero = c;
	printf("Cuarto numero: ");
	scanf("%i",&d);
	cuarto = d;

	if(a < b){
		if(a < c){
			if(a < d){
				min = a;
			}else{
				min = d;
			}
		}else{
			if(c < d){
				min = c;
			}else{
				min = d;
			}
		}
	}else if(b < c){
		if(b < d){
			min = b;
		}else{
			min = d;
		}
	}else if(c < d){
		min = c;
	}else{
		min = d;
	}
	printf("\nCalculando el MCD\n");
	for(i=2; i<=min; i++){
		for(j=1; j<=i; j++){
			if(i%j==0){
				e++;
			}
		}
		if(e == 2){
			primo = i;
		}

		potencia = 1;

		while(a % primo == 0 && b % primo == 0 && c % primo == 0 && d % primo == 0){
			potencia = potencia * primo;
			printf("%i - %i - %i - %i | %i\n", a, b, c, d, primo);
			a = a / primo;
			b = b / primo;
			c = c / primo;
			d = d / primo;			
		}
		mcd = potencia * mcd;
		e = 0;
	}
	printf("%i - %i - %i - %i\n", a, b, c, d);
	printf("\nMCD(%i, %i, %i, %i) = %i\n", primero, segundo, tercero, cuarto, mcd);
	return 0;
}