#include <stdio.h>

 int main()
 {
 int counter;
 for (counter=1; counter <= 100; counter++)
  {
   if (counter == 50)
   break;
   
   // The break statement terminates the loop when counter is 50
   printf(" %d ", counter);
  }

  return 0;
 }