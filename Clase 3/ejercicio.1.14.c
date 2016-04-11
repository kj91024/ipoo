#include <stdio.h>
#define MAX 58
int getline(void);
int printM(void);
int addN(int c);
int ndigit[MAX];

int main(){
	int i,n;
	extern int ndigit[];
	n = 0;
	for(i = 0;i<10;i++){
		ndigit[i] = -1;
	}
	while((n = getline()) > 0){
		printM();
	}
	return 0;
}
int getline(void){
	int c,n,i,j;
	n = i = j = 0;
	while((c = getchar()) != EOF){
		if(c >= 'A' && c <= 'z'){
			++ndigit[c-'A'];
		}
	    ++i;
	    if(c == '\n'){
			return i;
	    }
	}
}
int printM(void){
	int a,b,max;
	extern int ndigit[];
	printf("%s\n", "Imprecion del histograma");
	/*Histograma en horizontal*/
	for(a = 0;a < MAX;++a){
		if((a+65) <= 90 || (a+65) >= 97){
			printf("%c | ", (a+65));
			for(b = 0;b < ndigit[a];++b){
				printf("%c", '--');
			}
			printf("\n");
		}
	}
	/*Histograma en Vertical*/
	/*max = ndigit[0];
	for(a = 0;a < 10;++a){
		if(max < ndigit[a]){
			max = ndigit[a];
		}
	}
	for(a = max;a > 0;--a){
		for(b = 0;b < 10;++b){
			if(ndigit[b] >= a && ndigit[b] != 0){
				printf("%c", '|');
			}else{
				printf("%c", ' ');
			}
		}
		printf("\n");		
	}
	for(a = 0;a < 10;++a){
		printf("%c",'-');
	}
	printf("\n");		
	for(a = 0;a < 10;++a){
		printf("%i", a);
	}*/
}