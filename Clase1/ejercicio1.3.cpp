#include <stdio.h>

int main(){
    float fahr, celsius;
    int lower,upper,step;
    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;
    printf("Tabla de  conversiones de Fahrenheit a Celsius\n");
    while(fahr<=upper){
        celsius = (5.0/9.0)*(fahr-32);
        printf("%f\t%f\n",celsius,fahr);
        fahr = step + fahr;
    }
    return 0;
}
