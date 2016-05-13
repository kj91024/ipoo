#include <stdio.h>
int pl(char *a);
int main(){
	char *a = "asa";
	if(pl(a))
		printf("soy");
	else
		printf("no soy");
}
int pl(char *a){
	int i,max;
	for(i=0;*(a + i++) != '\0';)
		;
	max = i-1;
	for(i = 0;*(a + i++) == *(a + max--) && max >= i;)
		;
	return (*(a + --i) == *(a + ++max))? 1: 0;
}

