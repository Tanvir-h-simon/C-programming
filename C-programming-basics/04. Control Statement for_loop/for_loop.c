#include <stdio.h>
int main()
{
    int count;

    printf("First loop\n\a");

    for(count=1; count<=15; count++)
        printf(" %d ", count);

    printf("\nSecond loop\n\a");

    for(count=16; count<30; count++)
        printf(" %d ", count);

    return 0;
}
