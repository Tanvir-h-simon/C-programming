#include <stdio.h>
#include <math.h>
int main()
{
    long bin_num, dec_num = 0, remainder = 0, number_base = 0;

    printf("Enter the binary number: ");
    scanf("%ld", &bin_num);

    while(bin_num)
    {
        remainder = bin_num % 10;
        if (remainder){
            dec_num +=(pow(2,number_base));
        }
        bin_num /= 10;
        number_base++;
    }
  printf("\nDecimal equivalent is %ld\n", dec_num);
  return 0;
}
