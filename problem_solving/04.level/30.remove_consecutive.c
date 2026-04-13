# include <stdio.h>
# include <string.h>
int main()
{
    char str[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';

    printf("%c",str[0]);            //no need to check 1 char
    
    for(int i=1;str[i]!='\0';i++)
    {
        if(str[i]!=str[i-1])
        {
            printf("%c",str[i]);                  //print only non repeat consecutive element
        }
    }
}