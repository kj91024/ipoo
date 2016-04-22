#include <stdio.h>
#define MAX 100
char t[] = "holas";
char mystrcomp(char s[],char t[]);
int mygetline(char s[]);
int main(){
	char s[MAX];
	while(mygetline(s) > 0){
		printf("%s",mystrcomp(s,t));
	}
}
int mygetline(char s[]){
	int i;
	for(i = 0;(s[i++] = getchar()) != EOF && s[i-1] != '\n';)	
		;
	s[i] = '\0';
	return i;
}
char mystrcomp(char s[], char t[]){
	int i,j;	
	for(i = 0; s[++i] != '\0' && i < MAX;)
		;
	for(j = 0,--i; (s[i++] = t[j++]) && i < MAX;)
		;
	return s;
}
