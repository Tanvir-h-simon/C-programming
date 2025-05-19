#include <stdio.h>
int main()
{
    int base, exponent, result, i; //2^3=8; 2=base, 3=power(exponent), 8=result
    result = 1;

    printf("Enter the base: ");
    scanf("%d", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    for(i=0; i<exponent; i++){
        result*=base; //result = result*base
    }
    printf("%d^%d = %d\n", base, exponent, result);
    return 0;
}

/* Detailed example:
Example:
Calculate 2^3
Here, base = 2
      exponent = 3
Initial State: result = 1
               i = 0

Iteration 1:
Condition: i < exponent => 0 < 3 (True)
Body: result = result * base => result = 1 * 2 => result = 2
Increment: i++ => i = 1

Iteration 2:
Condition: i < exponent => 1 < 3 (True)
Body: result = result * base => result = 2 * 2 => result = 4
Increment: i++ => i = 2

Iteration 3:
Condition: i < exponent => 2 < 3 (True)
Body: result = result * base => result = 4 * 2 => result = 8
Increment: i++ => i = 3

Iteration 4:
Condition: i < exponent => 3 < 3 (False)
The loop terminates because the condition i < exponent is no longer true (3 is not less than 3).
Final State:
result = 8
The result 8 is the value of 2^3.