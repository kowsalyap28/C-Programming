//Find the largest character (based on ASCII value)
# include <stdio.h>
# include <string.h>
int main()
{
    char str[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    int max=0;
    char str2;
    for(int i=0;str[i]!='\0';i++)
    {
            int a=(int)str[i];
            if(a>max)
            {
                max=a;
                str2=str[i];
            }
    }
    printf("%c",str2);
}