#include <stdio.h>
void func_x (int get_array[])
{
    int n;
    for (n=0; n<5; n++)
        printf("\n %d ", get_array[n]);
}
int main()
{
    int value[5]={10,20,30,40,50};
    func_x(value);
    return 0;
}
