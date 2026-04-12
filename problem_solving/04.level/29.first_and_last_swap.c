//swap first and last char 
# include <stdio.h>
# include <string.h>
int main()
{
    char str[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';

    char tem=str[0];
    str[0]=str[strlen(str)-1];
    str[strlen(str)-1]=tem;
    
    for(int i=0;str[i]!='\0';i++)
    {
        printf("%c",str[i]);
    }

}