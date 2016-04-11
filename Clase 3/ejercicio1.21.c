#include <stdio.h>
#define MAXLINE 1000
int max;
char line[MAXLINE];
char longest[MAXLINE];

int getline(void);
char detab(int i);

int main(){
	int len,i;
	extern int max;
	extern char line[];

	max = 0;
	while((len = getline()) > 0){
		for(i = 0; i < len; i++){
			printf("%c",line[i]);
		}
	}
}
int getline(void){
	int c,i;
	extern char line[];
	i = 0;
	while(i < MAXLINE - 1 &&(c = getchar())!= EOF && c != '\n'){
		if(c == '\t'){
			line[i] = 32;
		}else{
			line[i] = c;
		}
		++i;
	}
	if(c == '\n'){
		line[i] = c;
		++i;
	}
	
	line[i] = '\0';
	return i;
}
char detab(int i){
	int c;
	extern char line[];
	for(c = i;c<i+4;c++){
		line[c] = 32;
	}
}