#include <stdio.h>
int main ()
{
    int months, days, hours;
    printf("Enter number of hours: ");
    scanf("%d", &hours);
    months = hours/(30*24);
    days = (hours % (30*24))/24;
    hours = hours % 24;
    printf("Month(s) = %d \nDay(s) = %d \nHour(s)= %d", months, days, hours);
    return 0;
}
