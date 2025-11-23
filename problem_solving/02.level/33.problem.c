# include <stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    if(n<=0)
    {
    while(1)
    {
        scanf("%d",&n);
        if(n>0)
        break;
    }
    }
    float sum=0.0,ans,fact=1;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
        ans=i/fact;
        sum=sum+ans;

    }
    printf("%.2f",sum);
}