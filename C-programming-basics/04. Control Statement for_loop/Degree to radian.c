#include <stdio.h>
#include <math.h>

int main()
{
    int i, n = 20;  // n is the number of terms in the series
    float x, term, sum;

    printf("\nInput an angle in degrees (x): ");
    scanf("%f", &x);

    x = x * 3.1416 / 180; // Convert angle x from degrees to radians

    term = 1.0;
    sum = 1.0;

    for(i = 1; i <= n; i++)
    {
        term = term * (-1) * x * x / (2 * i * (2 * i - 1));
        sum += term;
    }

    printf("\n cos(x) = %.3f\n", sum);

    return 0;
}
