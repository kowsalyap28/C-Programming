//swap adjacent char
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    int i=0;
    while(str[i]!='\0' && str[i+1]!='\0') //why str[i+1] for odd len of string
    {
        // if(str[i]==' ')
        // continue;
      char tem=str[i];
      str[i]=str[i+1];
      str[i+1]=tem;

      i=i+2;
    }
    printf("%s",str);
    return 0;
}