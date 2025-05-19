#include <stdio.h>
int main()
{
    float a,b,c;
    printf("Enter the first values: ");
    scanf("%f", &a);
    printf("Enter the second values: ");
    scanf("%f", &b);
    printf("Enter the third values: ");
    scanf("%f", &c);
    if (a>b) {
        if(a>c)
            printf("\na is the largest value.\n", a);
        else
            printf("\nc is the largest value.\n", c);
        }
    else { // (b>a)
        if(c>b)
            printf("\nc is the largest value.\n", c);
        else
            printf("\nb is the largest value.\n", b);
    }

    return 0;
}

/*
#include <stdio.h>

int main() {
    double num1, num2, num3;

    printf("Enter three numbers: ");
    scanf("%lf %lf %lf", &num1, &num2, &num3);

    double largest;

    if (num1 >= num2 && num1 >= num3) {
        largest = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        largest = num2;
    } else {
        largest = num3;
    }

    // Output the largest number

    printf("\nThe largest number is: %.2lf\n", largest);

    return 0;
}
*/