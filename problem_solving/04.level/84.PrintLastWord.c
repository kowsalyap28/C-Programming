// print of last word
# include <stdio.h>
# include <string.h>
int main()
{
    char str[100],words[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    int k=0;
    int i=strlen(str)-1;
    while(i>=0 && str[i]==' ')
    {
        i--;
    }
    while(i>=0 && str[i]!=' ')
    {
      if(str[i]!=' ')
        { 
            words[k++]=str[i];
        }
        i--;
    }
    words[k]='\0';
    int len=strlen(words);
   for(int i=len-1;i>=0;i--)
   {
     printf("%c",words[i]);
   }
}