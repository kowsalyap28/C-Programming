# include <stdio.h>
int main()
{
    int n,prime,i;
    scanf("%d",&n);
    
        for( i=2;i<=100000;i++)
        {
            int prime=1;
            for(int j=2;j<=i/2;j++)
            {
                if(i%j==0)
                {
                    prime=0;
                }
            }
        }
            if(prime==1)
            {
                for(int l=1;l<=n;l++)
                {
                    for(int m=1;m<=l;m++)
                    {
                        printf("%d",i);
                    }
                }
            }
        
    
}





