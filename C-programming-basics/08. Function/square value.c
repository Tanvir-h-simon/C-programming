#include <stdio.h>
void square_value (int value)
{
 int square;
 square= value*value;
 printf("The square value of %d = %d\n", value, square);
}
void main(void)
{
  square_value(5);
}
