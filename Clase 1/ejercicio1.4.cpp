#include <stdio.h>

int main(){
    float celsius,fahr;
    int lower,upper,step;
    lower = 0;
    upper = 300;
    step = 20;
    celsius = lower;
    while(celsius<=upper){
        fahr = ((9.0/5.0)*celsius)+32.0;
        printf("%6.0f\t%6.0f\n",celsius,fahr);
        celsius = celsius+step;
    }
    return 0;
}
