#include<stdio.h>
int main()
{
int i,vowel,consonant, digit, word,other;
i=vowel=consonant=digit=word=other=0;
char string[80], c;
printf("Type a string: ");
scanf("%[^\n]", string);
while ((c=tolower(string[i++])) != '\0')
 {
  if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
   ++vowel;
  else if (c>='a' && c<='z')
    ++consonant;
  else if(c>='0' && c<= '9')
    ++digit;
  else if(c==' ')
    ++word;
  else
    ++other;
  }
 ++word;
 printf("Vowels: %d\n", vowel);
 printf("Consonants: %d\n", consonant);
 printf("Digits: %d\n", digit);
 printf("Words: %d\n", word);
 printf("Other characters: %d\n", other);
 return 0;
 
}