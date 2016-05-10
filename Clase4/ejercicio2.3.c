#include <stdio.h>
#define MAX 1000
char list[MAX];
char word[MAX];

int getline();
int processWord(char list[],int len);
int htoi(char word[],int len);
int letter(int c);

int main(){
	extern char list[];
	int len,i;
	for(i = 0;i<MAX;i++){
		list[i] = 0;
	}

	while((len = getline()) > 0){
		printf("Numero entero es %i",htoi(list,len));
	}
}
int getline(){
	/*Insertamos todos los caracteres a la lista y devolvemos la cantidad de palabras que hay*/
	int c,i;
	i = 0;
	while((c = getchar()) != EOF){
		list[i] = c;
		if(c == '\n'){
			return i;
		}
		++i;
	}
}
int htoi(char list[],int max){
	int i,j,k,m,exps,hex;
	i = 2;
	m = max-3;
	hex = 0;
	while(i < max){
		exps = 1;
		for(k = m; k > 0; --k){
			exps *= 16;
		}
		hex = hex + letter(list[i]) * exps;
		m--;
		i++;
	}
	return hex;
}
int letter(int c){
	switch(c){
		case 'a': case 'A':	return 10;
		case 'b': case 'B':	return 11;
		case 'c': case 'C':	return 12;
		case 'd': case 'D':	return 13;
		case 'e': case 'E':	return 14;
		case 'f': case 'F':	return 15;
		default: 			return c-'0';
	}
}