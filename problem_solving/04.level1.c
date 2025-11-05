# include <stdio.h>
int main()
{
    char ch1,ch2;
    scanf("%c",&ch1);
     scanf(" %c",&ch2);
    if((ch1=='a'&&'e'&&'i'&&'o'&&'u'&&'A'&&'E'&&'I'&&'O'&&'U') &&
         (ch2=='a'&&'e'&&'i'&&'o'&&'u'&&'A'&&'E'&&'I'&&'O'&&'U'))
         {
            printf("%d\n",ch1);
            printf("%d\n",ch2);
            printf("%d",ch1+ch2);      
         }
    else  if((ch1!='a'&&'e'&&'i'&&'o'&&'u'&&'A'&&'E'&&'I'&&'O'&&'U')&&
         (ch2!='a'&&'e'&&'i'&&'o'&&'u'&&'A'&&'E'&&'I'&&'O'&&'U'))
         {
            printf("%d\n",ch1);
            printf("%d\n",ch2);
            printf("%d",ch1*ch2);      
         }
    else{
        printf("%d\n",ch1);
        printf("%d\n",ch2);
        printf("%d",ch1-ch2);
    }
}