#include <stdio.h>
#include <math.h>

int main()
{
    float n;

    while (1) // Infinite loop until a break condition is met
    {
        printf("Enter a number: ");
        scanf("%f", &n);

        if (n <= 0)
            break; // Exit the loop if the condition is met

        printf("%f\n", sqrt(n));
    }
    return 0;
}

/*
#include <stdio.h>
#include <math.h>

int main() {
    float n;


    for (;;) // Infinite loop until a break condition is met
    {
        printf("Enter a number: ");
        scanf("%f", &n);

        if (n <= 0)
            break; // Exit the loop if the condition is met

        printf("Square root of %f is %f\n", n, sqrt(n));
    }
    return 0;
}
