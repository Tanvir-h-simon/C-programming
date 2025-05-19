#include <stdio.h>

void func(int number) {
    if (number == 0) { // Base case
        return; 
    }
    int last_digit = number % 10;
    // printf("%d ", last_digit);
    func(number / 10);
    printf("%d ", last_digit);
}

int main() {
    int test_case;
    printf("How many test case: ");
    scanf("%d", &test_case);

    int number;
    printf("Enter the number: \n");
    for (int i = 0; i < test_case; i++) {
        scanf("%d", &number);
        func(number);
        printf("\n");
    }
    
    return 0;
}