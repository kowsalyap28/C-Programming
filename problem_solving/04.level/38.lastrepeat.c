// last repeat
# include <stdio.h>
# include <string.h>
int main()
{
    char str[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    char word[100];
    int j=0;
    for(int i=strlen(str)-1;i>=0;i--)
    {
       word[j]=str[i];
       j++;
       
    }
    word[j]='\0';
 
    for(int i=0;word[i]!='\0';i++)
    {
        for(int j=i+1;word[j]!='\0';j++)
        {
            if(word[i]==word[j])
            {
                printf("%c",word[i]);
                return 0;
            }
        }
    }
    printf("-1");
}