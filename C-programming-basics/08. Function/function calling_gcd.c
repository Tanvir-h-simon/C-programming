#include <stdio.h>
int calc_gcd(int x, int y)
{
    int gcd;
    while (y!=0)
    {
        gcd= x%y;
        x=y;
        y=gcd;
    }
    return (x);
}
int main(void)
{
    int gcd;
    gcd= calc_gcd (150,35);
    printf("The GCD(Greatest Common Divisor) of 150 and 35 is %d\n", gcd);
    return 0;
}
