#include <stdio.h>
main(){
	int c,i,white,nother,n;
	int ndigit[10];
	nwhite = nother = n = 0;
	for(i = 0;i<10;i++)
		ndigit[i]] = 0;
	while((c = getchar()) != EOF){
		if(c >= '0' && c<= '9'){
			++ndigit[c-'0'];
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