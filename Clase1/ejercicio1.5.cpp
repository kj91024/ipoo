#include <stdio.h>
main(){
    for(int fahr = 300; fahr>=0;fahr=fahr-20){
        printf("%i \t %6.1f \n",fahr, (5.0/9.0)*(fahr-32) );
    }
}
