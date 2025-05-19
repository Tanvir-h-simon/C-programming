#include <stdio.h>

int main() {
    int array_size;
    printf("Enter the size of the array: ");
    scanf("%d", &array_size);

    int array[array_size];
    printf("Enter the array element: ");
    for (int i = 0; i < array_size; i++) {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < array_size - 1; i++) {
        for (int j = i + 1; j < array_size; j++) {
            if (array[i] > array[j]) {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    printf ("Asscending order: ");
    for (int i = 0; i < array_size; i++) {
        printf("%d ", array[i]);
    }

    printf("\n");

    for (int i = 0; i < array_size - 1; i++) {
        for (int j = i + 1; j < array_size; j++) {
            if (array[i] < array[j]) {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    printf ("Descending order: ");
    for (int i = 0; i < array_size; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}