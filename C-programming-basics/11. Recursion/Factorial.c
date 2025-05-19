#include <stdio.h>

int calc_factorial(int num) {
    if (num == 1) {
        return 1;
    }  
    int value = calc_factorial(num - 1);
    return value * num;
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    calc_factorial(number);
    printf ("Factorial: %d", calc_factorial(number));
    return 0;
}