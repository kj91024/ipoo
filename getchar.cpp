#include <stdio.h>
int main(){
    int c,ns,nw;
	ns = 0;
	nw = 0;
	while((c = getchar()) != EOF){
		if(c == 32 or c == 10){
		    if(ns != 0){
		       	ns = 0;
		        nw++;
		        printf("%i\n", nw);
		    }
	    }else{
	      	ns++;
	    }
  	}
  	return false;
}
