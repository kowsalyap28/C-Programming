//Remove duplicate char string
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    int fre[256]={0};
    int len=strlen(str);
    for(int i=0;str[i]!='\0';i++)
    {
       for(int j=i+1;str[j]!='\0';j++)
       {
          if(str[i]==str[j])
          {
              for(int k=j;str[k]!='\0';k++)
              {
                str[k]=str[k+1];
              }
              j--;
              len--;
          }
       }
    }
    printf("%s",str);
}