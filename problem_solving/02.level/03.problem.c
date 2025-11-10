# include <stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            printf("%d ",i);
            sum=sum+i;
        }
    }
    printf("\n");
    printf("%d\n",sum);
    if(sum==n)
    {
        printf("%d=%d is an equal number",sum,n);
    }
    else 
    {
        printf("%d!=%d not an equal number",sum,n);
    }


}
