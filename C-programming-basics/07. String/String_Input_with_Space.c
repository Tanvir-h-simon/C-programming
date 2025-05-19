#include <stdio.h>
// #include <string.h>

int main() {
    char str[100];
    // printf("Enter full name: ");
    // scanf("%[^\n]", str); // Read until newline
    // printf("Your name is: %s\n", str);

    // printf("Enter full name: ");
    // gets(str); // Read until newline
    // printf("Your name is: %s\n", str);
    printf("Enter full name: ");
    fgets(str, sizeof(str), stdin); // Read until newline
    printf("Your name is: %s\n", str);
    return 0;
}