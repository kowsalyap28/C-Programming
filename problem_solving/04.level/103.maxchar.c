//program to print maximum character that is repeated in the
//string 
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    char vis[256]={0};
    int max=0;
    char maxchar;
    for(int i=0;str[i]!='\0';i++)
    {
           vis[str[i]]++;
           if(vis[str[i]]>max)
           {
            max=vis[str[i]];
            maxchar=str[i];
           }
    }
  printf("%c-%d",maxchar,max);
}