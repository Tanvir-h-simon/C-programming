#include <stdio.h>

int main() {
    FILE *fptr;
    // Create a file
    // The file is created in the same directory as other C files
    fptr = fopen("Test.txt", "w"); // "w" - write to a file
    // fptr = fopen("C:\\directoryname\\Test.txt", "w");

    // Write text to the file
    fprintf(fptr, "Hello World!\n");

    // Append text to the file
    fprintf(fptr, "Hi everyone!\n");

    // Close the file
    fclose(fptr);

    return 0;
}