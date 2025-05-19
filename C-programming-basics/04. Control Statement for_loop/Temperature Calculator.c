#include <stdio.h>
int main()
{
    int choice;
    double temp, converted_temp;

    printf("Temperature Conversion Menu:\n");
    printf("1. Convert Celsius to Fahrenheit\n");
    printf("2. Convert Fahrenheit to Celsius\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:  // Convert Celsius to Fahrenheit
            printf("\nEnter temperature in Celsius: ");
            scanf("%lf", &temp);
            converted_temp = (temp * 9/5) + 32;
            printf("%.2lf Celsius is equal to %.2lf Fahrenheit\n", temp, converted_temp);
            break;
        case 2: // Convert Fahrenheit to Celsius
            printf("\nEnter temperature in Fahrenheit: ");
            scanf("%lf", &temp);
            converted_temp = (temp - 32) * 5/9;
            printf("%.2lf Fahrenheit is equal to %.2lf Celsius\n", temp, converted_temp);
            break;
        default:  // Handle invalid input
            printf("Invalid choice. Please enter 1 or 2.\n");
            break;
    }

    return 0;
}
