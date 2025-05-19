#include <stdio.h>
int main()
{
 char name[] = "Israt";
 int ID = 313108;
 char section = 'G';
 int roll = 3085;
 int age = 21;
 float GPA = 5.00;
 char grade[] = "A+";

 printf("Student Name: %s\n",name);
 printf("Student ID: %d\n",ID);
 printf("Student Section: %c\n",section);
 printf("Student Roll Number: %d\n",roll);
 printf("Student Age: %d\n",age);
 printf("Student GPA: %.2f\n",GPA);
 printf("Student Grade: %s",grade);

 return 0;
}