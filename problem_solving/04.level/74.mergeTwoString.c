// Merge two string
# include <stdio.h>
# include <string.h>
int main()
{
    char str1[100], str2[100];
    fgets(str1,100,stdin);
    str1[strcspn(str1,"\n")]='\0';
    fgets(str2,100,stdin);
    str2[strcspn(str2,"\n")]='\0';
    int len1=strlen(str1);
    int len2=strlen(str2);
   for(int i=0;str2[i]!='\0';i++)
   {
      str1[len1+i]=str2[i];
   }
   for(int i=0;i<len1+len2;i++)
   {
   printf("%c",str1[i]);
   }
}