#include <stdio.h>
int main()
{
    double I, p, r, n; //I=Interest, p=principal, r=rate of interest, n=number of years
    printf("Principal amount of money: ");
    scanf("%lf", &p);
    printf("Rate of interest (in percentage): ");
    scanf("%lf", &r);
    printf("Number of years: ");
    scanf("%lf", &n);

    // Calculate simple interest
    I=(p*r*n)/100;

    printf("Simple interest = %lf", I);

    return 0;
}
