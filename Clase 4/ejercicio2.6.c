#include <stdio.h>
unsigned setbits(unsigned x,int p,int n,unsigned y)
{
    unsigned mask = (1U << n) - 1U; // n-bits
    return (x & ~(mask << p)) | ((y & mask) << p);
}