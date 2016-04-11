#include <stdio.h>
#define MAXLINE 1000

char line[MAXLINE];
char rline[MAXLINE];

int getline(int max);
void reverse(int len);

int main(){
	extern char rline[];
	int len,i;
	while((len = getline(MAXLINE)) >= 0){
		reverse(len);
		for(i = 0; i <= len;i++){
			 printf("%c",rline[i]);
		}
	}
}
int getline(int max){
	extern char line[];
	int c, n;
	n = 0;
	while((c = getchar()) != EOF && c!='\n'){
		if(n >= 0 && n < max){
			line[n] = c;	
		}
		++n;
	}
	return n;
}
void reverse(int len){
	extern char line[];
	extern char rline[];
	int i;
	for(i = len; i >= 0;i--){
		rline[len-i] = line[i];
	}
}