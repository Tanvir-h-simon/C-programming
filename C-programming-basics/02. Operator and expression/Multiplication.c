#include <stdio.h>
int main()
{
    float a,b,c;
    printf("\nEnter the first value: ");
    scanf("%f", &a);
    printf("\nEnter the second value: ");
    scanf("%f", &b);
    c=a*b;
    printf("\nThe multiplication answer is = %f*%f = %.2f", a,b,c);
    return 0;
}
