#include <stdio.h>

void square_num(void)
{
    int num;
    printf("\n\nNumber  Square\n");
    for (num = 1; num <= 10; num++)
        printf("%3d    %3d\n", num, num * num);
}

void cube_num(void)
{
    int num;
    printf("\n\nNumber  Cube\n");
    for (num = 1; num <= 10; num++)
        printf("%3d    %4d\n", num, num * num * num);
}

int main(void)
{
    printf("Square number lists");

    square_num();

    printf("\nCubic number lists");

    cube_num();

    return 0;
}
