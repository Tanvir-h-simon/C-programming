#include <stdio.h>
void hello(int i)  {
    if (i == 6) { // Continuation Condition : Base Case
        return;
    }
    printf("%d ", i);
    hello(i + 1); // Increment
}

int main() {
    int i = 1; // Initialization
    hello(i); 
    return 0;
}