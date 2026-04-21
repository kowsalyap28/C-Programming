// Print characters at even and odd index positions separately
# include <stdio.h>
# include <string.h>

int main()
{
    char str[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';

    printf("even index element:");
    for(int i=0;str[i]!='\0';i++)
    {
        if(i%2==0)
        printf("%c",str[i]);
    }

    printf("\n");

    printf("odd index element:");
    for(int i=0;str[i]!='\0';i++)
    {
        if(i%2 != 0)
        printf("%c",str[i]);
    }
    return 0;
}