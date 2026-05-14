# include <stdio.h>
# include <string.h>
int main()
{
    char str[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    int len=strlen(str)-1;
    int found=1;
    for(int i=0;i<len;i++,len--)
    {
        if(str[i]!=str[len])
        {
            found=0;
            break;
        }
    }
   if(found==1)
   {
     printf("%s is palindrom",str);
   }
   else
   {
     printf("%s is not palindrom",str);
   }
}