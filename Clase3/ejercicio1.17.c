#include <stdio.h>
#define MAXLINE 1000 /*Tamaño maximo de la linea de entrada*/
int getline(void);
int line[MAXLINE];
/*Imprime la linea de entrada mas larga*/
int main(){
	int i,len;
	/*extern int line[];*/
	while((len = getline()) >= 1){
		for(i = 0;i<len;i++){
			printf("%c",line[i]);
		}
	}
	return 0;
}
int getline(void){
	int i,c;
	extern int line[];
	i = 0;
	while((c = getchar()) != EOF){
		line[i] = c;
		++i;
		if(c = '\n'){
			return i;
		}
	}
}