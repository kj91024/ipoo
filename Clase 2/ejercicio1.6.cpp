#include <stdio.h>
main(){
    while(int c = (getchar()!= EOF) ){
        printf("%i\n",c);
    }
    printf("%i\n",0);
}

