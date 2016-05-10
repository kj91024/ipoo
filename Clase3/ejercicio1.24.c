#include <stdio.h>
int main(){
	int len;
	int c,cor,ll,p;
	cor = ll = p = 0;
	while((c = getchar()) && c != '\n'){
		switch(c){
			case '{':ll++; break;
			case '}':ll++; break;
			case '[':cor++;break;
			case ']':cor++;break;
			case '(':p++;  break;
			case ')':p++;  break;
		}
	}
	if(ll % 2 == 0 && cor % 2 == 0 && p % 2 == 0){
		printf("%s\n", "corchetes, llaves, parentesis se abren y cierran muy bien");
	}else{
		printf("%s\n", "error verificar");
	}
}