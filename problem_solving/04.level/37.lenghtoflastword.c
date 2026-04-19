// length of last word
# include <stdio.h>
# include <string.h>
int main()
{
    char str[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    int i=strlen(str)-1;
    int count=0;
   
    while(i>=0 && str[i]==' ')
    {
        i--;
    }
    while(i>=0 && str[i]!=' ')
    {
       count++;
       i--;
    }
    printf("%d",count);
}