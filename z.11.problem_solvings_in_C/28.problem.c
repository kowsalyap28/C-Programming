// write a programm to find vowel or consonant using switch case
# include <stdio.h>
void main()
{
    char alphabets;
    printf("enter alphabets((a-z)||(A-Z)):");
    scanf("%c",&alphabets);
  switch(alphabets)
  {
  case 'a':
  case 'e':
  case 'i':
  case 'o':
  case 'u':
  case 'A':
  case 'E':
  case 'I':
  case 'O':
  case 'U':
 printf(" It is vowel");
 break;
 default:
 printf("It is consonant");
 break;
  }
  
}