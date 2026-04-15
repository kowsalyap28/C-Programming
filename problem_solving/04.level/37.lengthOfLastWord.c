//length of last word
# include <stdio.h>
# include <string.h>
int main()
{
    char str[100];
    char words[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    int j=0;
    for(int i=strlen(str)-1;i>=0;i--)
    {
        if(str[i]!=' ')
        {
        words[j]=str[i];
        j++;
        }
        else 
        break;
    }
    for(int k=j-1;k>=0;k--)
    {
        printf("%c",words[k]);
    }

}




