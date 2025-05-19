#include <stdio.h>
void sum_of_all(int tanvir)
{
long int number, sum;
sum=0;
for (number=0; number<= tanvir; number++)
sum+= number;
printf("Sum of all numbers from 1 to %d= %ld\n", tanvir, sum);
}
void main(void)
{
sum_of_all(100);
}
