# include <stdio.h>
int main()
{
 int a;
 char ch;
 scanf(" %c",&ch);
 if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')
 {
    printf("%c is alphabet",ch);
 }
 else
 {
    printf("%c is not alphabet",ch);
 }
}