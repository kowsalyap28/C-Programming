//first non repeating char
# include <stdio.h>
# include <string.h>
int main()
{
    char str[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    int fre[256]={0};
    for(int i=0;str[i]!='\0';i++)
    {
        fre[str[i]]++;
    }
    for(int i=0;str[i]!='\0';i++)
    {
        if(fre[str[i]]==1)
        {
            printf("%c",str[i]);
            break;
        }
    }
    printf("-1");
}