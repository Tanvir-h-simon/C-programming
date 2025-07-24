#include <stdio.h>

int main()
{
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 400 == 0)
    {
        printf("%d is a leap year.\n", year);
    }
    else if (year % 100 == 0)
    {
        printf("%d is not a leap year.\n", year);
    }
    else if (year % 4 == 0)
    {
        printf("%d is a leap year.\n", year);
    }
    else
    {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}
/*
#include <stdio.h>
int main()
{
    int year;
    printf("\aPlease enter a year: ");
    scanf("%d", &year);
    if ((year%4==0 && year%100!=0) || (year%400==0))
    {
        printf("\n%d is a Leap Year", year);
    }
    else
    {
        printf("\n\a%d is not a Leap Year", year);
    }
    return 0;
}
*/