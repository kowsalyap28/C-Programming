//length of largest word
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    char word[100];
    int j=0;
    int max=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]!=' ')
        {
            word[j++]=str[i];
        }
        else{
            word[j]='\0';
            if(j>max)
            {
                max=j;
            }
            j=0;
        }
    }
    //for last word
     word[j]='\0';
            if(j>max)
            {
                max=j;
            }
    printf("%d",max);
}