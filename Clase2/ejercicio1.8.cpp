#include <stdio.h>
main(){
    int c,cs,ct,cl;
    cs = 0;
    ct = 0;
    cl = 0;
    while(c=getchar()){
            if(c==32)
                ++cs;
            if(c==9)
                ++ct;
            if(c==10)
                ++cl;
        printf("#espacios: %i  #tabulacion: %i #lineas: %i\n",cs,ct,cl);
    }
}


