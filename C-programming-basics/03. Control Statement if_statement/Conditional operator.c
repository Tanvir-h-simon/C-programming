#include <stdio.h>

int main() {
    int score;
    printf("Type your exam score: ");
    scanf("%d", &score);

    // Conditional operator (ternary operator): (condition) ? expression_if_true : expression_if_false
    (score >= 40) ? printf("Pass") : printf("Fail");

    return 0;
}
/*
#include <stdio.h>
int main()
{
    int score;
    printf("Type your exam score: ");
    scanf("%d", &score);
    if (score>=40)
    {
        printf("Pass");
    }
    else
    {
        printf("Fail");
    }
    return 0;
}
*/
