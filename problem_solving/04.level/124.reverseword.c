//reverse words in a sentence
# include <stdio.h>
# include <string.h>
int main()
{
    char str[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    char words[100];
    int len=strlen(str)-1,j=0;
    for(int i=len;i>=0;i--)
    {
        if(str[i]!=' ')
        {
            words[j++]=str[i];
        }
        else
        {
            words[j]='\0';
            for(int k=j-1;k>=0;k--)
            {
                printf("%c",words[k]);
            }
            printf(" ");
            j=0;
        }
    }
    //for last word
     words[j]='\0';
            for(int k=j-1;k>=0;k--)
            {
                 printf("%c",words[k]);
            }
           
            return 0;
}