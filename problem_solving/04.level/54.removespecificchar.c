# include <stdio.h>
# include <string.h>
int main()
{
    char str[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    char r;
    scanf(" %c",&r);
    int len=strlen(str);
    for(int i=0;str[i]!='\0';i++)
    {
        
        if(str[i]==r)
        {
             for(int j=i;str[j]!='\0';j++)
             {
                str[j]=str[j+1];
             }
             i--;
             len--;
        }
    }
    printf("%s",str);
}