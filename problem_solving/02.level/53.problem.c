# include <stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
            int prime=1;
            if(i<2)
            {
                 prime=0;
            }
            for(int j=2;j*j<=i;j++)
            {
                if(i%j==0)
                {
                    prime=0;
                }
            }
            if(prime==1)
            {
                while(n%i==0)
                {
                sum=sum+i;
                n/=i;
                }
            }
        }
        printf("%d",sum);
    
    
}