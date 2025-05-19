#include <stdio.h>
int main()
{
    int number;
    printf("Type a integer below: ");
    scanf("%d", &number);

    if (number % 2==0) // (number % 2!=0) && (number % 2==1) -> odd number
    {
        printf("%d is a even number.", number);
    } else {
        printf("%d is a odd number.", number);
    }
    
    return 0;
}