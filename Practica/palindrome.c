#include <stdio.h>
#define MAX 1000
int palindrome(char *s,int n);
int mgetline(char s[]);
int main(){
        char s[MAX];
        int len;
        while((len = mgetline(s)) > 0 ){
                if(palindrome(s,len))
                        printf("Si es palindrome\n");
                else
                        printf("No es palindrome\n");
                
        }

}
int mgetline(char s[]){
        int i;
        for(i = -1;(s[++i] = getchar()) != EOF && s[i] != '\n';)
                ;
        return i;
}
int palindrome(char *s,int n){
	int min, max;
	min = 0;
	max = n-1;
        for(;*(s + min++) == *(s + max--) && max > 0;)
		 ;
	return (*(s + min--) == *(s + max++))? 1 : 0;
}

