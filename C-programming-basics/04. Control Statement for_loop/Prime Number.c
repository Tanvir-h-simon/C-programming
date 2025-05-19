#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    int flag = 1; // If flag is 1, the number is prime. If flag is 0, the number is not prime.

    // Prompt user to enter a number
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Calculate the square root of the number
    double square_root = sqrt(num);

    // Iterate from 2 to sqrt(num)
    for (int i = 2; i <= (int)square_root; i++){
        if (num % i == 0)
            flag = 0; //The number is not prime
            break;
    }
    if (flag)
        printf("%d is a prime number\n", num);
    else
        printf("%d is not a prime number\n", num);

    return 0;
}
