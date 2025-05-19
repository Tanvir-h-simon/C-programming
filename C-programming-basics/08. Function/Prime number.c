#include <stdio.h>
#include <math.h>
#include <stdbool.h>

// Function to check if a number is prime
bool prime(int num) {
    if (num <= 1) {
        return false; // Numbers less than or equal to 1 are not prime
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return false; // If num is divisible by any number other than 1 and itself, it is not prime
        }
    }
    return true; // If no divisors were found, the number is prime
}

int main() {
    int num;

    // Prompt user to enter a number
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check if the number is prime
    if (prime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
