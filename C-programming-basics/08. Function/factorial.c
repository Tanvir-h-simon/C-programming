 #include <stdio.h>
 long factorial(long n)
 {
     if (n<=1)
        return 1;
     else
        return(n*factorial(n-1));
 }
 int main()
 {
     long x;
     x= factorial(5);
     printf("Factorial is: %ld", x);
     return 0;
 }

 /*
 long factorial(long n)
 {
     long i, result;
     result=1;
     for(i=2; i<=n; i++)
        result*=i;
        return (result);
 }
 void main(void)
 {
     long value;
     value=factorial(5);
     printf("Factorial is: %ld", value);
 }
