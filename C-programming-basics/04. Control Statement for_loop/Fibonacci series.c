#include <stdio.h>
int main()
{
    int n, i;
    int next_term, t1, t2;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("The first %d terms of the Fibonacci series are: ", n);

    t1 = 0, t2 = 1;

    for(i=0; i<=n; ++i){
        printf("%d ", t1); // Print the current term (t1)

        // Calculate the next term in the series
        next_term = t1+t2; // nextTerm is the sum of the previous two terms
        t1 = t2; // Update t1 to be the next term (t2)
        t2 = next_term; // Update t2 to be the next term (next_term)
    }
    return 0;
}
