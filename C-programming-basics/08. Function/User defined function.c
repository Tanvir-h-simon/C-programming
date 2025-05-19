#include <stdio.h>
int sum_of_all()
{
    int n, sum;
    sum=0;
    for(n=0; n<=50; n++)
        sum += n;
    printf("Sum= %d", sum);
    return 0;
}
int main()
{
    sum_of_all();
}
