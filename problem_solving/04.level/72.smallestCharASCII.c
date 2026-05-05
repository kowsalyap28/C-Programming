////Find the smallest character (based on ASCII value)
# include <stdio.h>
# include <string.h>
int main()
{
    char str[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    char minstr=str[0];         //assume first char as smallest one
    for(int i=0;str[i]!='\0';i++)
    {
            if(str[i]<minstr)
            {
                minstr=str[i];
            }
    }
    printf("%c",minstr);
}