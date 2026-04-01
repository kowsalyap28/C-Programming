// reverse of last word
# include <stdio.h>
# include <string.h>
int main()
{
    char str[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    int length = strlen(str)-1;
    for(int i=0;i<length;i++,length--)
    { 
        
        char tem=str[i];
        str[i]=str[length];
        str[length]=tem;
    }
    int count=0;
    for(int i=0;str[i]!='\0';i++)
    {
         if(str[i]!=' ')
         {
            count++;
         }
         else if(str[i]==' ')
         {
            printf("%d",count);
            return 0;
         }
    }
    
}