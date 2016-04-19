#include <stdio.h>
#define MAX 1000
int mstrcmp(char *s,char *t);
int mgetline(char s[]);
char t[] = "as";
int main(){
        char s[MAX];
        int len;
        while((len = mgetline(s)) > 0 ){
		if(mstrcmp(s,t))
			printf("Encontrado\n");
		else
			printf("No encontrado\n");
            
        }

}
int mgetline(char s[]){
        int i;
        for(i = -1;(s[++i] = getchar()) != EOF && s[i] != '\n';)
                ;
        return i;
}
int mstrcmp(char *s,char *t){
        for(;*t++ == *s++ && *t != '\0';)
                ;
	if(*t == '\0')
		return 1;
	else
		return 0;
}
