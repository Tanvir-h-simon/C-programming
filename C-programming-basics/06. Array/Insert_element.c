#include <stdio.h>

int main() {
    int array_length;
    printf("Enter the length of the array: ");
    scanf("%d", &array_length);
    int array[array_length];
    for (int i = 0; i < array_length; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array[i]);
    }
    printf("Array: ");
    for (int i = 0; i < array_length; i++) {
        printf("%d ", array[i]);
    }

    int index, value;
    printf("\nEnter the index to insert a new element: ");
    scanf("%d", &index);
    printf("Enter the value to insert: ");
    scanf("%d", &value);
    if (index < 0 || index > array_length) {
        printf("Invalid index!\n");
        return 1;
    }

    // for (int i = array_length; i >= index + 1; i--) {
    //     array[i] = array[i - 1];
    // }
    // printf("New array: ");
    // for (int i = 0; i <= array_length; i++) {
    //     printf("%d ", array[i]);
    // }   
    
    int new_array[array_length + 1];
    for (int i = 0; i < index; i++) {
        new_array[i] = array[i];
    }
    new_array[index] = value;
    for (int i = index + 1; i <= array_length; i++) {
        new_array[i] = array[i - 1];
    }
    printf("New array: ");
    for (int i = 0; i <= array_length; i++) {
        printf("%d ", new_array[i]);
    }
    return 0;
}