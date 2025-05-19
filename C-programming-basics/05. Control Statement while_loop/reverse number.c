#include <stdio.h>

int main() {
    int number = 123456;
    int rev_number = 0;

    // Reverse the digits of number
    while (number) {
        rev_number = rev_number * 10 + number % 10; // Multiply rev_number by 10 and add the last digit of number
        number /= 10; // Remove the last digit from number
    }

    printf("%d\n", rev_number); // Print the reversed number
    return 0;
}
