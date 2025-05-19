#include <stdio.h>
int main()
{
    char ch;
    int count_lower=0;
    int count_other=0;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch>='a' && ch<='z')
        ++count_lower;
    else
    {
        ++count_other;
        printf("%c is not lower case letter\n", ch);
    }
    printf("Count of lowercase letters: %d\n", count_lower);
    printf("Count of other characters: %d\n", count_other);

    return 0;
}