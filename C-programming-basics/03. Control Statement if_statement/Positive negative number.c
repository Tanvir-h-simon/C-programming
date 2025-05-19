#include <stdio.h>
int main()
{
    float number;
    printf("Please type a number: ");
    scanf("%f", &number);
    if (number>0)
    {
       printf("The number is a positive number.");
    }
    else if (number<0)
    {
       printf("The number is a negative number");
    }
    else
    {
        printf("The number is zero, and it's a positive number");
    }
    return 0;
}
