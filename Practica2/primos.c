#include <stdio.h>
int main(){
	int c,prim,a,b;
	c = prim = 0;
	for(a=2; prim < 100; a++){
		for(b=1; b<=a; b++){
			if(a%b==0){
				c++;
			}
		}
		if(c == 2){
			++prim;
			printf("%i \n",a);
		}
		c = 0;
	}
}