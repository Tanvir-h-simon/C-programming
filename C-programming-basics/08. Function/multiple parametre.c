#include <stdio.h>
float change_data (int x, int y, int z)
{
    int result;
    result=x+y+z;
    return result;
}
void main (void)
{
    float result;
    result= change_data(15,16,17);
    printf("Result is %f", result);
}
