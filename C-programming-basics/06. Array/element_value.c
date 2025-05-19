#include <stdio.h>
int main()
{
    int score[5] = {80, 85, 86, 87, 91};
    int i;

    printf("Value of: \n");

    for (i=0; i<5; i++)
        printf("Score[%d] is %d\n", i, score[i]);
    return 0;
}
