#include <stdio.h>
int main(){
	int c,cs,ct,ce;
	cs = 0;
	ct = 0;
	ce = 0;

	while((c = getchar()) != EOF){
		switch(c){
			case 10: 	ce++;break;
			case 9: 	ct++;break;
			case 32:	cs++;break;
		}
		printf("Espacios: %i \t Tabulaciones: %i \t Salto de linea: %i\n", cs, ct, ce);
	}
	return 0;
}