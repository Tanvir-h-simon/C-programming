#include <stdio.h>
#include <stdbool.h>

int main() {
    int array_size;
    printf("Enter the size of the array: ");
    scanf("%d", &array_size);

    int array[array_size];
    printf("Enter the array element: ");
    for (int i = 0; i < array_size; i++) {
        scanf("%d", &array[i]);
    }
   
    int sum;
    printf("Enter the value of x(sum): ");
    scanf("%d", &sum);

    // int flag = 0; // False
    bool is_found = false;

    for (int i = 0; i < array_size - 1; i++) {
        for (int j = i + 1; j < array_size; j++) {
            if (array[i] + array[j] == sum) {
                // flag = 1; // True
                is_found = true;
                printf("%d + %d = %d\n", array[i], array[j], sum);
            }
        }
    }
    
    // if (flag != 1) { // False
    //     printf("Error!");
    // }
    if (!is_found) {
        printf("Error!");
    }

    return 0;
}