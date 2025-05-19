#include <stdio.h>
int main()
{
    int num1, num2;
    printf("First integer: ");
    scanf("%d", &num1);
    printf("Second integer: ");
    scanf("%d", &num2);

    printf("\nBitwise AND of %d and %d = %d\n", num1, num2, num1 & num2);
    printf("Bitwise OR of %d and %d = %d\n", num1, num2, num1 | num2);
    printf("Bitwise XOR of %d and %d = %d\n", num1, num2, num1 ^ num2);
    printf("Bitwise NOT of %d = %d\n", num1, ~ num1);
    printf("Bitwise NOT of %d = %d\n", num2, ~ num2);

    return 0;
}

/*
How it works?

Example input: num1 = 5, num2 = 3

Bitwise AND Operation: num1 & num2
    5 (0101) & 3 (0011)
    = 1 (0001)
Output: Bitwise AND of 5 and 3 is 1

Bitwise OR Operation: num1 | num2
    5 (0101) | 3 (0011)
    = 7 (0111)
Output: Bitwise OR of 5 and 3 is 7

Bitwise XOR Operation:num1 ^ num2
    5 (0101) ^ 3 (0011)
    = 6 (0110)
Output: Bitwise XOR of 5 and 3 is 6

Bitwise NOT Operation:
~num1:
    ~5 (0000 0101)
    = -6 (1111 1010) (in two's complement representation)
Output: Bitwise NOT of 5 is -6
~num2:
    ~3 (0000 0011)
    = -4 (1111 1100) (in two's complement representation)
Output: Bitwise NOT of 3 is -4
*/
