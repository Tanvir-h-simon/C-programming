#include <stdio.h>

int main() {
    int array_length;
    printf("Enter the size/length of the array: ");
    scanf("%d", &array_length);
    int array[array_length];

    for (int i = 0; i < array_length; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("Original array: ");
    for (int i = 0; i < array_length; i++) {
        printf("%d ", array[i]);
    }

    // // Print the array in reverse order
    // printf("\nArray in reverse order: ");
    // for (int i = array_length - 1; i >= 0; i--) {
    //     printf("%d ", array[i]);
    // }

    // int start = 0;
    // int end = array_length - 1;
    // while (start < end) {
    //     // Swap the elements at start and end indices
    //     int temp = array[start];
    //     array[start] = array[end];
    //     array[end] = temp;

    //     // Move towards the middle of the array
    //     start++;
    //     end--;
    // }
    // printf("\nReversed array: ");
    // for (int i = 0; i < array_length; i++) {
    //     printf("%d ", array[i]);
    // }

    // Reverse the array
    int reversed_array[array_length];
    for (int i = 0; i < array_length / 2; i++) {
        reversed_array[i] = array[(array_length - 1) - i];
    }
    reversed_array[array_length / 2] = array[array_length / 2];
    
    for (int i = (array_length / 2) + 1; i < array_length; i++) {
        reversed_array[i] = array[(array_length - 1) - i];
    }

    printf("\nReversed array: ");
    for (int i = 0; i < array_length; i++) {
        printf("%d ", reversed_array[i]);
    }
    return 0;
}