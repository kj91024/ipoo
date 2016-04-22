#include <stdio.h>
#include <string.h> 
#define MAXLINE 100
int mgetline(char s[],int n);

main(int argc,char *argv[]){
	int i;
	for(i = 0;i < argc;i++)
		printf("%s",argv[i]);
	printf("\n");
	return 0;
}
