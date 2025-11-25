# include <stdio.h>
int main()
{
    int s,e,prime;
    scanf("%d %d",&s,&e);
    for(int i=s;i<=e;i++)
    {
        int prime=1;
        if(i<2)
        {
            prime=0;
        }
        for(int j=2;j*j<=i;j++)
        {
            if(i%j==0)
            prime=0;
        }
        if(prime==1)
        {
            printf("%d ",i);
        }
    }
}