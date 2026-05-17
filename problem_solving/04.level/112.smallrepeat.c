//Smallest repeated element in a String!
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    int fre[256]={0};
    for(int i=0;str[i]!='\0';i++)
    {
        fre[str[i]]++;
    }
    char min=127;
    for(int i=0;str[i]!='\0';i++)
    {
        if(fre[str[i]]>1)
        {
            if(str[i]<min)
            {
                min=str[i];
            }
        }
    
    }
    printf("%c",min);
}