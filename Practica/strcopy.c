#include <stdio.h>
#define MAX 1000
void mstrcopy(char *s,char *t);
int mgetline(char s[]);
int main(){
	char s[MAX];
	char t[MAX];
	int len;
	while((len = mgetline(s)) > 0 ){
		mstrcopy(s,t);		
		printf("%s\n",t);
	}

}
int mgetline(char s[]){
	int i;
	for(i = -1;(s[++i] = getchar()) != EOF && s[i] != '\n';)
		;
	return i;
}
void mstrcopy(char *s,char *t){
	for(;*t++ = *s++;)
		;
}
