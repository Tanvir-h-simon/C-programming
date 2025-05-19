#include <stdio.h>

int func_elmnt(int value_1, int value_2);
int main()
{
    int x;
    int tanvir[5]={54,56,76,79};

    x = func_elmnt(tanvir[1], tanvir[4]);
    printf("\nSum value is: %d ", x);

    return 0;
}
int func_elmnt(int value_1, int value_2)
{
    int y;
    y = value_1 + value_2;
    printf("Sum = %d", y);
    return y;
}