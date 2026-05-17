//Replace space in a string with character("%20").
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    char newch[100];
    int j=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i] == ' ')
        {
            newch[j++]='%';
            newch[j++]='2';
            newch[j++]='0';
        }
        else{
            newch[j++]=str[i];
        }
    }
    newch[j]='\0';
    printf("%s",newch);
}