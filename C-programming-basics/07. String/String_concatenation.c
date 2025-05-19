#include <stdio.h>
#include <string.h>

int main() {
    char str_1[100], str_2[100];

    printf("Enter first string: ");
    // scanf("%s", str_1); // Read until space
    scanf("%[^\n]", str_1); // Read until newline
   
    getchar(); // consume leftover newline

    printf("Enter second string: ");
    // scanf("%s", str_2); // Read until space
    scanf("%[^\n]", str_2); // Read until newline

    // int length_str_1 = strlen(str_1); // Call the function to calculate length
    // int length_str_2 = strlen(str_2); // Call the function to calculate length


    // // Concatenate str_1 and str_2
    // for (int i = 0; i <= length_str_2; i++){ // Find the end of str_1
    //     str_1[i + length_str_1] = str_2[i]; // Copy str_2 to the end of str_1
    // }

    strcat(str_1, str_2); // Concatenate str_2 to str_1 using strcat (String Concatenation) function

    // Print the concatenated string
    printf("Concatenated string: %s\n", str_1);
    // Print the length of the concatenated string 
    int length_str_1_concat = strlen(str_1); // Call the function to calculate length
    printf("Length of concatenated string: %d\n", length_str_1_concat); // Print the length of the string

    return 0;
}