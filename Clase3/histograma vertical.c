#include <stdio.h>
#define MAX 1000
int getline(void);
int printM(void);
int addN(int c);
int ndigit[MAX];

int main(){
	int i,n;
	extern int ndigit[];
	n = 0;
	for(i = 0;i<10;i++){
		ndigit[i] = 0;
	}
	while((n = getline()) > 0){
		printM();
	}
	return 0;
}
int getline(void){
	int c,i;
	extern int ndigit[];
	i = 0;
	while((c = getchar()) != EOF && c != '\n'){
		if(c >= '0' && c <= '9'){
			++ndigit[c-'0'];
	    }
	    ++i;
	}
	return i;
}
int printM(void){
	int a,b,max;
	extern int ndigit[];
	printf("%s\n", "Histograma");
	/*Histograma en horizontal*/
	/*for(a = 0;a < MAX;++a){
		if(ndigit[a] == -1){
			break;
		}
		printf("P%i\t| ", (a+1));
		for(b = 0;b < ndigit[a];++b){
			printf("%c", '--');
		}
		printf("\n");
	}*/
	/*Histograma en Vertical*/
	max = ndigit[0];
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
	}
	printf("\n");
}