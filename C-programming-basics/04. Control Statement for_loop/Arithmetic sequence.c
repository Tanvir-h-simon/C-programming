#include <stdio.h>
int main()
{
    int first_term, common_diff, n;
    printf("Give the first term of arithmetic sequence: ");
    scanf("%d", &first_term);
    printf("Enter the common difference: ");
    scanf("%d", &common_diff);
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    int i, term; // Declare variables for the loop counter and the current term

    printf("\nThe first %d terms of the arithmetic sequence are: ", n);

    for(i=0;i<n;i++){
        term = first_term + i*common_diff; // Calculate the i-th term
    printf(" %d ", term);
    }
    printf("\n"); // Print a newline at the end for better formatting
    return 0;
}
