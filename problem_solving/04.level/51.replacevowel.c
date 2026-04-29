//replace vowel with next char of vowel
# include <stdio.h>
# include <string.h>
int main()
{
    char str[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a')
        str[i]='e';
        else if(str[i]=='e')
        str[i]='i';
        else if(str[i]=='i')
        str[i]='o';
        else if(str[i]=='o')
        str[i]='u';
        else if(str[i]=='u')
        str[i]='a';
        else if(str[i]=='A')
        str[i]='E';
        else if(str[i]=='E')
        str[i]='I';
        else if(str[i]=='I')
        str[i]='O';
        else if(str[i]=='O')
        str[i]='U';
        else if(str[i]=='U')
        str[i]='A'; 
    }
    printf("%s",str);
}