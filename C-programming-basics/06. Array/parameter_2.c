#include <stdio.h>

void func_x(float array[], int size);

int main()
{
    float israt[5] = {10.0, 20.5, 31.25, 42.5, 50};
    float jahan[4] = {1.4, 2.6, 3.6, 4.7};
    float nipu[3] = {-5.5, 6.7, -9.6};

    printf("Value of israt array:\n\t");
    func_x(israt, 5);
    printf("\nValue of jahan array:\n\t");
    func_x(jahan, 4);
    printf("\nValue of nipu array:\n\t");
    func_x(nipu, 3);

    return 0;
}

void func_x(float array[], int size)
{
    int n;
    for (n = 0; n < size; n++)
        printf(" %.2f ", array[n]);
}
