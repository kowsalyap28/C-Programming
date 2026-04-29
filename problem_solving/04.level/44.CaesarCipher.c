//Caesar Cipher 
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
int main()
{
    char str[100];
    int time;
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    scanf("%d",time);
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>='A' && str[i] <= 'Z')
        {
            printf("%c",(str[i]+time)%26);
        }
    }
}