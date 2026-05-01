# include <stdio.h>
# include <string.h>
int main()
{
   char str[100];
   fgets(str,100,stdin);
   str[strcspn(str,"\n")]='\0';
   int len=strlen(str);
   char tem=str[0];
   str[0]=str[len-1];
   str[len-1]=tem;
   for(int i=0;i<len;i++)
   {
   printf("%c",str[i]);
   }
}