//reverse each word
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';

    char words[100];
     int j=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]!=' ')
        {
           words[j++]=str[i];
        }
        else{
            words[j]='\0';
            for(int i=j;i>=0;i--)
            {
                printf("%c",words[i]);
            }
            j=0;
            printf(" ");
        }
    }
    //for last word
     words[j]='\0';
            for(int i=j;i>=0;i--)
            {
                printf("%c",words[i]);
            }
}