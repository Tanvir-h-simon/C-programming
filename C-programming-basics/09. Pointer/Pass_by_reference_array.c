#include <stdio.h>

void func(int array[]);

int main() {
    int array[] = {10, 20, 30, 40, 50};
    func(array);
    for (int i = 0; i < 5; i++) {
        printf("%d ", array[i]);    
    }
    return 0;
}

void func(int array[]) {
    array[0] = 5; // Pass by reference
    // Variable : Pass by value
    // Array: Pass by reference
}