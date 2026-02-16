//strings in c
# include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    char string[n];         // stores no of char
    scanf("%s",&string);        
    printf("%s",string);
    printf("\n");
    for(int i=0;i<n;i++)
    {
        printf("%c",string[i]);
    }
}