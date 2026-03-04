//print Each Character in Separate Line
#include <stdio.h>
int main()
{
    char str[100];
    scanf("%s",str);
    for(int i=0;str[i]!='\0';i++)
    {
        printf("%c \n",str[i]);
    }
}