// write a programm to check whether a given character is alphabet and if yes ,check whether it is uppper case or lowercase

# include <stdio.h>
void main()
{
 char ch;
 printf("enter the character:");
 scanf("%c",&ch);
 if((ch >='a' & ch <= 'z')||(ch >= 'A' & ch <= 'Z') )
 {
    if(ch>='a'& ch<='z')
    {
        printf("it is alphates and in lower case:");
    }
    else
    {
     printf("alphabets are in upper case");
    }

 }
 else
 {
    printf("invalid operator");
 }

}