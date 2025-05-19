#include <stdio.h>
int main()
{
    int sum, i, score[5];
    float average;
    sum = 0;

    for(i=0; i<5; i++)
    {
        printf("Enter score[%d]: ", i);
        scanf("%d", &score[i]);
        sum += score[i];
    }
    average = (float) sum / 5.0;
    printf("\nAverage is: %f", average);
    return 0;
}