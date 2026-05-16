//Extract last 4 char from word in a sentence
# include <stdio.h>
# include <string.h>
int main()
{
    char str[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    int len=strlen(str)-1;
    int count=0;
    char words[5];
    int j=0;
    for(int i=len;i>=0;i--)
    {
        words[j++]=str[i];
        if(j==4)
        {
            words[j]='\0';
            for(int i=j;i>=0;i--)
            {
                printf("%c",words[i]);
            }
            return 0;
        }
    }
    return 0;
}