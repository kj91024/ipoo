#include <stdio.h>
#define MAX 1000
char p[MAX];
int getline();

int main(){
	int len,i;
	extern char p[];
	while((len = getline()) > 0 ){
		for(i=0;p[i] != '\n';i++){
			printf("%c",p[i]);
		}
	}
	printf("%s\n", "No se ha escrito nada");
}
int getline(){
	extern char p[];
	int i,c;
	i = 0;
	while((c = getchar()) != EOF){
		p[i] = c;
		if(c == '\n'){
			return i;
		}
		i++;
	}	
}