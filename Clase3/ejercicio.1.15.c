#include <stdio.h>
int convert(int fahr){
    int c;
    c = (5.0/9.0)*(fahr-32);
    return c;
}
int main(){
    float fahr, celsius;
    int lower,upper,step;
    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;
    printf("Tabla de  conversiones de Fahrenheit a Celsius\n");
    while(fahr<=upper){
        celsius = convert(fahr);
        printf("%f\t%f\n",celsius,fahr);
        fahr = step + fahr;
    }
    return 0;
}
