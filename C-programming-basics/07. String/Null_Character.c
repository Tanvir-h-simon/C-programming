#include <stdio.h>

int main() {
    char str[100];
    printf("Enter my name (Tanvir): ");
    scanf("%s", str);
    printf("My name is: %s\n", str);

    // Print the ASCII value of the 7th character
    // The 7th character is the null terminator '\0' which has an ASCII value of 0
    printf ("%d", str[6]); 
    return 0;
}