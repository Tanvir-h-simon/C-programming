#include <stdio.h>

int main() {
    FILE *fptr;
    // Open a file in read mode
    fptr = fopen("Test.txt", "r");
    // Store the content of the file
    char str[50];
    // Read the content and print it
    while(fgets(str, 50, fptr)) {
        printf("%s", str);
    }

    fclose(fptr);
    
    return 0;
}