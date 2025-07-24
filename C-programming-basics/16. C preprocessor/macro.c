#include <stdio.h> // File Inclusion
#define LIMIT 5 // Macro definition
// #undef LIMIT // Macro undefinition

int main() {
    // int limit = 5;
    for (int i = 1; i <= LIMIT; i++) {
        printf("%d ", i);
    }
    
    return 0;
}