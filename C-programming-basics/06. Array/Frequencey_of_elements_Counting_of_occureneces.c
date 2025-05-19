#include <stdio.h>
// #include <stdbool.h>

int main() {
    int array_length;
    printf("Enter the length of the array: ");
    scanf("%d", &array_length);
    int array[array_length];

    for (int i = 0; i < array_length; i++) {
        scanf("%d", &array[i]);
    }

    int count = 0;

    for (int i = 0; i < array_length; i++) {
        // Break if element was already counted- skip the counting block and don't print anything
        int counted = 0; // bool counted = false;
        for (int j = 0; j < i; j++) {
            if (array[i] == array[j]) {
                counted = 1; // counted = true;
                break;
            }
        }

        if (!counted) { // Counted remains false
            count = 0;
            for (int k = 0; k < array_length; k++) {
                if (array[i] == array[k]) {
                    count++;
                }
            }
        
            // Print the count of the element
            printf("Element %d occurs %d times\n", array[i], count);
        }
    }
    return 0;
}