#include <stdio.h>
int main()
{
    float celcius, fahrenheit;

    printf("\nEnter temperature in celcius/centrigrade: ");
    scanf("%f", &celcius);

    fahrenheit=(1.8*celcius)+32;
    printf("\nThe temperature in Fahrenheit is: %.2f", fahrenheit);

    return 0;
}
