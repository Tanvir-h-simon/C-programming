#include <stdio.h>

void print_array(int array_size, int array[], int index) {
    if (index == array_size) {
        return;
    }
    printf(": %d ", array[index]);
    print_array(array_size, array, index + 1);
    
}

int main() {
    int array_size;
    scanf("%d", &array_size);
    int array[array_size];
    for (int i = 0; i < array_size; i++) {
        scanf("%d", &array[i]);
    }

    print_array(array_size, array, 0);
    return 0;
}