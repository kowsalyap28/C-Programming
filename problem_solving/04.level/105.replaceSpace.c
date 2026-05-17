//print the string replacing the space with given character -- input
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    char rch;
    scanf(" %c",&rch);
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
        {
            str[i]=rch;
        }
    }
    printf("%s",str);
}