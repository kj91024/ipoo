#include <stdio.h>
#include <limits.h>

int main()
{

   printf("El numero bits en un byte %d\n", CHAR_BIT);

   printf("El minimo valor de SIGNED CHAR = %d\n", SCHAR_MIN);
   printf("El maximo valor de SIGNED CHAR = %d\n", SCHAR_MAX);
   printf("El maximo valor de UNSIGNED CHAR = %d\n", UCHAR_MAX);

   printf("El minimo valor de SHORT INT = %d\n", SHRT_MIN);
   printf("El maximo valor de SHORT INT = %d\n", SHRT_MAX); 

   printf("El minimo valor de INT = %d\n", INT_MIN);
   printf("El maximo valor de INT = %d\n", INT_MAX);

   printf("El minimo valor de CHAR = %d\n", CHAR_MIN);
   printf("El maximo valor de CHAR = %d\n", CHAR_MAX);

   printf("El minimo valor de LONG = %ld\n", LONG_MIN);
   printf("El maximo valor de LONG = %ld\n", LONG_MAX);
  
   return(0);
}