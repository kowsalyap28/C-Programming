// replace with specific char a->b   t->g
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
        if(str[i]=='a')
        {
            str[i]='b';
        }
        else if(str[i]=='t')
        {
            str[i]='g';
        }
        else if(isdigit(str[i]))
        {
            str[i]='n';
        }
    }
    printf("%s",str);
}

