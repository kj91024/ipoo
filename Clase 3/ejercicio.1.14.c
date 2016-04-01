#include <stdio.h>
main(){
	int c,i,white,nother,n;
	int ndigit[10];
	nwhite = nother = n = 0;
	for(i = 0;i<10;i++)
		ndigit[i]] = 0;
	while((c = getchar()) != EOF){
		if(c != 9 && c != 10 && c != 32){
			++n;
		}
		if(n >= 0 && n<= 9){
			++ndigit[n];
		}
		for(i = 0;i<10;i++){
			printf("%i\t", ndigit[n]);
		}
		printf("\n");
		for(i = 0;i<10;i++){
			printf("%i\t", i);
		}
	}
}