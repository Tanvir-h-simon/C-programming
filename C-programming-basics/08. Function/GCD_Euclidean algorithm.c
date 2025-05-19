#include <stdio.h>
// Function to find GCD using Euclidean algorithm
int find_GCD(int a, int b)
{
    while (b != 0) {
        int temp = b; // Store the value of b in a temporary variable
        b = a % b; // Update b to be the remainder of a divided by b
        a = temp; // Update a to be the previous value of b
    }
    return a; // When b becomes 0, a contains the GCD
}
}

int main()
{
    int num1, num2, gcd;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    gcd = find_GCD(num1, num2);

    printf("GCD of %d and %d is %d\n", num1, num2, gcd);

    return 0;
}
