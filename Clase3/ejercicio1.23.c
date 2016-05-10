#include <stdio.h>
#define MAXLINE 1000
int max;
char line[MAXLINE];
int init;
int finit;
int getline(void);
int copy(void);
int deletec(int len);

int main(){
	int len;
	extern int max;
	max = 0;
	while((len = getline())>0){
		deletec(len);
	}
}
int getline(void){
	int c,i;
	extern char line[];
	i = 0;
	while((c = getchar())!= EOF && c != '\n'){
		line[i] = c;
		i++;
	}
	return i;
}
int deletec(int len){
	extern char line[];
	extern int init;
	extern int finit;
	int i;
	init = finit = 0;
	for(i = 0; i<len-1;i++){
		if(line[i] == '/' && line[i+1] == '*' && init == 0){
			++init;
		}
		if(line[i] == '*' && line[i+1] == '/' && finit == 0){
			++finit;
		}
	}

	if(init == 1 && finit == 1 || init == 0 && finit == 0){
		init = finit = 0;
		i = 0;
		while(i<len){
			/*printf("%i ", line[i]);*/
			if(line[i] == '/' && line[i+1] == '*' && init == 0){
				init++;
			}
			if(line[i] == '*' && line[i+1] == '/' && finit == 0){
				++finit;
				i = i+2;
			}
			if(init == 1 && finit == 1){
				init = 0;
				finit = 0;
			}
			if(init == 0 && finit == 0){
				printf("%c", line[i]);
			}
			i++;
		}
	}else if(init != 0 && finit != 0){
		printf("%s\n", "Los signos del comentario estan mal colocados");
	}
}