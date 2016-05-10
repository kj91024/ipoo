#include <stdio.h>
int main(){
	static char *s[] = {"asd","fgh","asd"};
	printf("%c\n",*s[2]);
}
