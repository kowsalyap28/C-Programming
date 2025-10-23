# include <stdio.h>
int main()
{
    int i,j,a,rev=0,n;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        for(j=i;j>=1;j--)
        {
            printf("%d",j);
        }
    
        printf("\n");
    }
}