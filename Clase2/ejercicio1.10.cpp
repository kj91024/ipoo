#include <stdio.h>
main(){
    int c;
    while((c = getchar()) != EOF){
        if(c  == 32){
            printf("%c","\b");
        }
        else if(c == 9){
            printf("%c","\t");
        }
        else if(c == '\'){
             printf("%c","\\");
        }
        else{
            putchar(c);
        }
    }
}

