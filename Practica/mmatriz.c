#include <stdio.h>
void mult(int ma[],int mb[],int mc[]);
int main(){
	char fgh;
	int x,y,p;
	int ma[2][2] = {{20,48},
		        {-8, -12}};
	int mb[2][2] = {{-4, 1},
		        {-6,0}};

	int mc[2][2] = {{0, 0},
	                {0, 0}};
	for(y = 0;y < 2;y++)
		for(x = 0;x < 2;x++)
			for(p = 0;p < 2;p++)
				mc[y][x] += ma[y][p] * mb[p][x];
	
	for(y = 0; y < 2;y++){
		printf("| ");
		for(x = 0;x < 2;x++){
			printf("%i ",mc[y][x]);
		}
		printf("|\n");
	}
	/*mult(ma,mb,mc);*/
}
void mult(int ma[],int mb[],int mc[]){
	
}
