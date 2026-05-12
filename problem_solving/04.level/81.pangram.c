//pangram
# include <stdio.h>
# include <string.h>
# include <ctype.h>
int main()
{
    char str[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    int alpha[26];
    for(int i=0;str[i]!=0;i++)
    {
        char ch=tolower(str[i]);
        if(ch >= 'a' && ch <= 'z')
        {
             alpha[ch-'a']=1;
        }
    }
    int found=1;
    for(int i=0;i<26;i++)
    {
        if(alpha[i]==0)
        {
            found=0;
            break;
        }
    }
    if(found==1)
    {
        printf("PANGRAM");
    }
    else{
        printf("NOT A PANGRAM");
    }
}