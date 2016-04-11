#include <stdio.h>
#define MAXLINE 1000
int max;
char line[MAXLINE];
char longest[MAXLINE];

int getline(void);
int copy(void);
int doblar(int len);

int main(){
	int len;
	extern int max;
	max = 0;
	while((len = getline())>0){
		doblar(len);
	}
}
int getline(void){
	int c,i;
	extern char line[];
	i = 0;
	while((c = getchar())!= EOF && c != '\n'){
		line[i] = c;
		++i;
	}
	return i;
}
int doblar(int len){
	int i;
	extern char line[];
	for(i = 0;i<len;i++){
		printf("%c", line[i]);
	}
	printf("\n");
	for(i = 0;i<len;i++){
		printf("%c", line[i]);
	}
}