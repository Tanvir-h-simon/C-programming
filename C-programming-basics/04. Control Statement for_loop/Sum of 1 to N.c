#include <stdio.h>
int main()
{
    long int n, sum, range;


    printf("How many numbers do you want to calculate: \n");
    scanf("%ld", &range);

    sum = 0;

    for(n=1; n<=range; n++)
        sum += n;

    printf("Sum of numbers from 1 to %ld= %ld\n", range,sum);

    return 0;
}
