#include <stdio.h>
void back_print(void)
{
    char x;
    if ((x=getchar())!='\n')
        back_print();
    putchar(x);
}
int main()
{
    printf("Type a line of text: ");
    back_print();
    return 0;
}
