#include <stdio.h>
int main()
{
    int num, reverse_num, remainder;
    reverse_num = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    while (num!=0){
            remainder = num % 10; // Get the last digit
            reverse_num = (reverse_num*10) + remainder; // Append the digit to reversed_num
            num /= 10;   // Remove the last digit from num
    }
    printf("Reverse Number: %d", reverse_num);
    return 0;
}
/*
Example Walkthrough:
Let's walk through an example with num being 1234:
Initial State: num = 1234
               reverse_num = 0
First Iteration: remainder = 1234 % 10 = 4
                 reverse_num = 0 * 10 + 4 = 4
                 num = 1234 / 10 = 123
Second Iteration: remainder = 123 % 10 = 3
                  reverse_num = 4 * 10 + 3 = 43
                  num = 123 / 10 = 12
Third Iteration: remainder = 12 % 10 = 2
                 reverse_num = 43 * 10 + 2 = 432
                 num = 12 / 10 = 1
Fourth Iteration: remainder = 1 % 10 = 1
                  reverse_num = 432 * 10 + 1 = 4321
                  num = 1 / 10 = 0
Loop Terminates: num is now 0, so the loop terminates.
                 reverse_num now holds the reversed number, which is 4321.
*/
