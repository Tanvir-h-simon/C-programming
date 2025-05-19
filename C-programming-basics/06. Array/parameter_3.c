#include <stdio.h>

int func_element(int value_1, int value_2);
int main()
{
    int x, value[5]={85, 91, 76, 73};
    x = func_elmnt(value[1], value[3]);
    printf("\nReturn value is: %d ", x);
    return 0;
}
int func_elmnt(int value_1, int value_2)
{
    int y;
    y = value_1 + value_2;
    return y;
}
