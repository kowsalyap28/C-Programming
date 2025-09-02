// write a programm to check the type of  character : vowel : consonant : digit : 0r special symbol
# include <stdio.h>
void main()
{
char  ch;
printf("enter the character:");
scanf("\n%c",&ch);

 if((ch>= 'a' && ch <='z')||(ch>='A' && ch<='Z'))

 {
   if((ch== 'a'|| ch=='e'||ch== 'i'||ch=='o'||ch=='u') || (ch== 'A'||ch == 'E'|| ch == 'I'||ch=='O'||ch=='U'))
   {
   
    printf(" it is vowel");
   }
   else 
  {  
    printf("it is consonant");
  }
 }
 else
 if(ch>= '0' && ch <= '9')
 {
   printf("it is a digit");
 }
 else
 {
   printf("special symbol");
 }
}