#include <stdio.h>
int main()
{
    int number,sum;

    sum=0;

    for(number=1; number<=100; number++)
        sum += number;

        printf("Sum= %d",sum);

    return 0;
}
