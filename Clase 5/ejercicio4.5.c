#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAXOP 100
#define NUMBER '0'
#define NAME 'n'

int getop(char []);
void push(double);
double pop(void);
void mathfnc(char []);

/* calculadora polaca */

int main(void)
{
    int type;
    double op2,op1;
    char s[MAXOP];
    void clearsp(void);

    while((type = getop(s)) != EOF)
    {
        switch(type)
        {
                case NUMBER:
                        push(atof(s));
                        break;
                case NAME:
                        mathfnc(s);
                        break;
                case '+':
                        push(pop()+pop());
                        break;
                case '*':
                        push(pop()*pop());
                        break;
                case '-':
                        op2 = pop();
                        push(pop()-op2);
                        break;
                case '/':
                        op2 = pop();
                        if(op2 != 0.0)
                            push(pop()/op2);
                        else
                            printf("error:divicion entre cero\n");
                        break;
                case '%':
                        op2 = pop();
                        if(op2 != 0.0)
                            push(fmod(pop(),op2));
                        else
                            printf("erro:divicion entre cero\n");
                        break;
                case '?':
                        op2=pop();
                        printf("\t%.8g\n",op2);
                        push(op2);
                        break;
                case 'c':
                        clearsp();
                        break;
                case 'd':
                        op2=pop();
                        push(op2);
                        push(op2);
                        break;
                case 's':
                        op1=pop();
                        op2=pop();
                        push(op1);
                        push(op2);
                        break;  
                case '\n':
                        printf("\t%.8g\n",pop());
                        break;
                default:
                        printf("error: no reconosco el comando %s\n",s);
                        break;
        }
    }
    return 0;
}


#define MAXVAL 100

int sp = 0;
double val[MAXVAL];

void push(double f)
{
    if(sp < MAXVAL)
        val[sp++]=f;
    else
        printf("error:array lleno no puedo hacer push %g\n",f);
}


double pop(void)
{
    if(sp>0)
        return val[--sp];
    else
    {
        printf("error: array vacio\n");
        return 0.0;
    }
}

void clearsp(void)
{
    sp = 0;
}

#include  <ctype.h>
#include<string.h>

int getch(void);
void ungetch(int);

int getop(char s[])
{
    int i,c;

    while((s[0] = c = getch()) == ' ' || c =='\t')
        ;
    s[1] = '\0';
        
    i = 0;
    if(islower(c))
    {
        while(islower(s[++i]=c=getch()));
            ;
        s[i]='\0';
        if(c!=EOF)
            ungetch(c);
        if(strlen(s)>1)
            return NAME;
        else
            return c;
    }
        
    if(!isdigit(c) && c!='.' && c!='-')
        return c;

    if(c=='-')
        if(isdigit(c=getch()) || c == '.')
            s[++i]=c;
        else
        {
            if(c!=EOF)
                ungetch(c);
            return '-';
        }
    
    if(isdigit(c))
        while(isdigit(s[++i] =c =getch()))
            ;

    if(c=='.')
        while(isdigit(s[++i] = c=getch()))
            ;
    
    s[i] = '\0';
    if(c!=EOF)
        ungetch(c);
    return NUMBER;
}

#define BUFSIZE 100

char buf[BUFSIZE];
int bufp = 0;

int getch(void)
{
    return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c)
{
    if(bufp >= BUFSIZE)
        printf("ungetch: muchos caracteres\n");
    else
        buf[bufp++] = c;
}

/* mathfnc: verifica el string y mira si soporta funciones mateaticas */

void mathfnc(char s[])
{
    double op2;
    
    if(strcmp(s,"sin")==0)
        push(sin(pop()));
    else if(strcmp(s,"cos")==0)
        push(cos(pop()));
    else if(strcmp(s,"exp")==0)
        push(exp(pop()));
    else if(strcmp(s,"pow")==0)
    {
        op2 = pop();
        push(pow(pop(),op2));
    }
    else
        printf("error: %s no esta soportado\n",s);
}
