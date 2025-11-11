# include <stdio.h>
int main()
{
    int n,i,a,sum=0;
    scanf("%d",&n);
    if(n<=0)
    {
        printf("Invalid input");
    }
    else{
        for(i=1;i<=n;i++)
        {
            a=i*i;
            printf("%d ",a);
            sum+=a;
        }
        printf("\n");
        printf("%d",sum);
    }
}