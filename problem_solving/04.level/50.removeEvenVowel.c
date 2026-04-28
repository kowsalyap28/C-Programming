//remove vowels in even index
# include <stdio.h>
# include <string.h>
int main()
{
   char str[100];
   fgets(str,100,stdin);
   str[strcspn(str,"\n")]='\0';
   int len=strlen(str);
   for(int i=len-1;i>=0;i--)
   {
     if(i%2==0 && (str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'))
    {
           for(int j=i;j<len;j++)
           {
              str[j]=str[j+1];
           }
           len--;
    }
   }
   for(int i=0;str[i]!='\0';i++)
   {
    printf("%c",str[i]);
   }
}