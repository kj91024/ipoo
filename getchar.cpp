#include <stdio.h>
int main(){
    int c,ns,nw;
	n = 0;
	nw = 0;
	while((c = getchar()) != EOF){
		if(c == 32 or c == 10){
		    if(n != 0){
		       	n = 0;
		        nw++;
		        printf("%i\n", nw);
		    }
	    }else{
	      	n++;
	    }
  	}
  	return false;
}
