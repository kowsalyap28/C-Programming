//Print the First UpperCase Letter
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char str[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    for(int i=0;str[i]!='\0';i++)
    {
        if(isupper(str[i]))
        {
            printf("%c",str[i]);
            return 0;
        }
    }
}