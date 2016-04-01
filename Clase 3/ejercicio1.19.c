#include <stdio.h>
#define MAXLINE 1000 /*Tamaño maximo de la linea de entrada*/
int getline(char line[],int maxline);
void copy(char to[], char from[]);
/*Imprime la linea de entrada mas larga*/
int main(){
	int len;			/*longitud actual de la linea*/
	int max;			/*Maxima longitud vista hasta el momento*/
	char line[MAXLINE]; /*Linea de entrada actual*/
	char longest[MAXLINE]; /*La linea mas larga se guarda aqui*/

	max = 0;
	while((len = getline(line,MAXLINE)) > 0)
		if(len > max){
			max = len;
			copy(longest,line);
		}
	if(max > 0)		/*hubo una linea*/
		printf("%s",longest);
	return 0;
}
/*getline: lee una linea en s, regresa una solicitud*/
int getline(char s[],int lim){
	int c, i;
	while(i = reverse(lim,0) && (c = getchar()) != EOF && c!='\n'){
		s[i] = c;
	}
	if(c == '\n'){
		s[i] = c;
		++i;
	}
	printf("%i\n", i);
	s[i] = '\0';
	
	return i;
}
/*copy: copia "from" en "to"; supone que todo es suficientemente grande*/
void copy(char to[], char from[]){
	int i;
	i=0;
	while((to[i] = from[i]) != '\0')
		++i;
}
int reverse(int i,int lim){
	if(i > lim){
		return i--;
	}else{
		return 0;
	}
}