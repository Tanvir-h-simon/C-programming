#include <stdio.h>
void call_by_value(int, int, int);
int main(void)
{
    int israt=2, jahan=3, nipu=4;
    call_by_value(israt, jahan, nipu);
    printf("\nAfter function calling: %d %d %d \n", israt, jahan, nipu);
    return 0;
}
void call_by_value(int x, int y, int z)
{
    printf("Original values are: %d %d %d ", x,y,z);
    x+=100;
    y+=101;
    z+=102;
    printf("\nAfter changing the values: %d %d %d ", x,y,z);
}
