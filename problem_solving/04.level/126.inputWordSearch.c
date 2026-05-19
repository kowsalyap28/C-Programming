//search word in input
# include <stdio.h>
# include <string.h>
int main()
{
    char str[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    char words[100];
    fgets(words,100,stdin);
    words[strcspn(words,"\n")]='\0';
    if(strstr(str,words)!=NULL)
    {
        printf("%s is found",words);
    }
    else{
        printf("%s is not found",words);
    }


}