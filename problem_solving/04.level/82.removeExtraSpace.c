// Remove extra spaces (ensure only one space between words)
# include <stdio.h>
# include <string.h>
int main()
{
    char str[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    char newstr[100];
    int j=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]!=' ')
        {
            newstr[j++]=str[i];           
        }
        else if (j>0 && newstr[j-1]!=' ')
        {
            newstr[j++]=' ';
        }
    }
    newstr[j]='\0';
// remove trailing space
    while(j>0 && newstr[j]==' ')
    {
        j--;
    }
    printf("%s",newstr);
    return 0;
}