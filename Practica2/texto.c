#include <stdio.h>
#define MAXLINE 1000
int line();
void agregar(char *a,char s[]);
int main(){	
	line();
}
int line(){
	char s[MAXLINE];
	char m[MAXLINE][MAXLINE];
	int c,p,l;
	p = l = 0;
	while((c = getchar()) != EOF){
		if(c == ' ' || c == '\n'){			
			s[l] = '\0';			
			if(l != 1){				
				agregar(m[p],s);
								
				l = 0;
				p++;
			}					
		}else{
			s[l++] = c;
		}
		
	}
}
void agregar(char a[],char s[]){
	int i;
	for(i = 0; (a[i] = s[i]) != '\0'; i++)
		;
	printf("%s",a);
}

