#include <stdio.h>
#define MAX 1000
#define NUMBER 1

int isDigit(char c);
int isSpace(char c);
double aTof(char s[]);

char getType(char s[]);
char getch(void);
void ungetch(char c);

double pop(void);
double push(double n);

int main(){
	char type,s[MAX];	
	while( (type = getType(s)) ){
		switch(type){
			case NUMBER:
				push(aTof(s));
			break;	
			case '+':
				
			break;
			case '-':
				
			break;
			default:
				printf("%s","No reconozco el comando");
			break;
		}	
	}
}

int isDigit(char c){
	return (c >= '0' && c <= '9') ? 1 : 0;
}
int isSpace(char c){
	return (c == ' ') ? 1 : 0;
}
double aTof(char s[]){
	int sign;
	double power,num;
	char *i;
	for(i=&s[0]; isSpace(*i); i++)	
		;
	
	sign = (*i == '-') ? -1 : 1 ;

	if(isDigit(*i))
		for(num = 0.0;isDigit(*i); i++)
			num = num * 10.0 + (*i - '0');

	if(*i++ == '.'){
		for(power = 1.0; isDigit(*i);i++){
			num = num * 10.0 + (*i - '0');
			power *= 10.0;
		}		
	}
	return sign * num / power;
}
char getType(char s[]){
	int i;
	for(;isSpace(s[0] = getch()) && s[0] != EOF;)
		;
	i = 0;
	if(s[i] == '-')
		if(isDigit(s[++i] = getch()))
			s[++i] = getch();
		else{
			ungetch(s[i]);
			return '-';
		}
	if(!isDigit(s[i]) && s[i] != '-' && s[i] != '.')
		return s[i];
		
	if(isDigit(s[i]))
		for(;isDigit(s[++i] = getch());)
			;
	if(s[i] == '.')
		for(;isDigit(s[++i] = getch());)
			;
	if(s[i] != EOF){
		ungetch(s[i]);	
	}	
	s[i] = '\0';
	return NUMBER;	
}
#define MAXVAL 100
void push(double n){
	
}
double pop(void){
	
}

#define MAXBUF 100
int nbuf = 0;
char buf[MAXBUF];
char getch(void){
	return (nbuf > 0)? buf[nbuf--] : getchar();
}
void ungetch(char c){
	if(nbuf < MAXBUF)
		buf[nbuf++] = c;
	else
		printf("El array buf esta lleno!");
}
