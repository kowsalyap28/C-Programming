//palidrome
# include <stdio.h>
# include <string.h>
int main()
{
    char str[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    int len=strlen(str)-1;
    int pal=1;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]!=str[len])
        {
            pal=0;
            break;
        }
        len--;
    }
    if(pal)
    {
        printf("%s is palindrome",str);
    }
    else{
        printf("%s is not a palindrome",str);
    }
    return 0;
}