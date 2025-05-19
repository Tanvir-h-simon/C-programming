// #include <stdio.h>
// void hello(int i)  {
//     if (i == 6) { // Continuation Condition
//         return;
//     }
//     hello(i + 1); // Increment
//     printf("%d ", i);
// }

// int main() {
//     int i = 1; // Initialization
//     hello(i); 
//     return 0;
// }

#include <stdio.h>

void hello(int i) {
    if (i == 0) { // Continuation Condition : Base Case 
        return;
    }
    printf("%d ", i);
    hello(i - 1); // Decrement
}

int main() {
    int i = 5; // Initialization
    hello(i);
    return 0;
}
