#include <stdio.h>
int main()

{
int total_students = 50;
int boys = 32;
int girls = 18;
float percentage_boys = (float) boys/total_students*100;
float percentage_girls = (float) girls/total_students*100;
char unit= '%';

printf ("Percentage of boys in the classroom: %.2f %c\n", percentage_boys,unit);
printf ("Percentage of girls in the classroom: %.2f %c", percentage_girls,unit);

return 0;
}