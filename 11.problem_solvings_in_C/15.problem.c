// write a programm to check alaphabet or not 
# include <stdio.h>
void main()
{
char ch;
printf("enter the character:");
scanf("%c",&ch);
if((ch>='A' && ch<='Z' ) || (ch >= 'a' && ch <= 'z'))
printf(" character is alphabet:");
else
{
    printf(" not a alphabet");
}

}