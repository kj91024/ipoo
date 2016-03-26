#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a,b,c,d,e,potencia,max,primo,mcd,primero,segundo,tercero,cuarto;

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


	if(a > b){
		if(a > c){
			if(a > d){
				max = a;
			}else{
				max = d;
			}
		}else{
			if(c > d){
				max = c;
			}else{
				max = d;
			}
		}
	}else if(b > c){
		if(b > d){
			max = b;
		}else{
			max = d;
		}
	}else if(c > d){
		max = c;
	}else{
		max = d;
	}
	printf("\nCalculando el MCD\n");
	for(int i=2; i<=max; i++){
		for(int j=1; j<=i; j++){
			if(i%j==0){
				e++;
			}
		}
		if(e == 2){
			primo = i;
		}

		potencia = 1;

		while(a % primo == 0 and b % primo == 0 and c % primo == 0 and d % primo == 0){
			potencia = potencia * primo;
			printf("%i - %i - %i - %i | %i\n", a, b, c, d, primo);
			a = a / primo;
			b = b / primo;
			c = c / primo;
			d = d / primo;
			printf("%i - %i - %i - %i\n", a, b, c, d);
		}

		mcd = potencia * mcd;
		e = 0;
	}
	printf("\nMCD(%i, %i, %i, %i) = %i\n", primero, segundo, tercero, cuarto, mcd);
	return 0;
}