#include <stdio.h>
main(){
    int c,pb;
    pb = 0;
    while((c = getchar()) != EOF){
        if(c == 32){/*espacio en blanco*/
            ++pb;
        }else{
            pb = 0;
        }
        if(pb == 1 || pb == 0){
            putchar(c);
        }
    }
}
