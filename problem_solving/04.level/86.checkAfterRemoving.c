//Write a program to find whether a string is a palindrome after removing all non-alphanumeric characters.
# include <stdio.h>
# include <string.h>
# include <ctype.h>
int main()
{
    char str[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    int k=0;
    char words[100];
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
        continue ;
        char ch=tolower(str[i]);
        if (ch >= 'a' && ch <= 'z')
        {
           words[k++]=ch;
        }
        else if (ch >= '0' && ch <= '9')
        {
            words[k++]=ch;
        }
    }
    words[k]='\0';
    int len=strlen(words)-1;
    int i=0;
    int found=1;
    while(i<len)
    {
           if(words[i]!=words[len])
           {
              found=0;
              break;
           }
           i++;
           len--;
    }
    if(found==1)
    {
        printf("%s is palindrome",words);
    }
    else 
    {
        printf("%s is not a palidrome",words);
    }
}