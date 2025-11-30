// alphabet trinagle generator
# include <stdio.h>
int main()
{
    int n;
    char ch='A';
    scanf("%d",&n);
    if(n<=0)
    {
        printf("invalid");
        return 0;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%c", ch);
        }
        ch++;
        printf(" \n");
    }
}