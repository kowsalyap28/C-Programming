# include <stdio.h>
# include <math.h>
int main()
{
    int k,prime,i,found=0;
    scanf("%d",&k);
    if(k<0)
    {
        printf("invalid input");
        return 0;
    }
    for(i=2;i<=k;i++)
    {
        int prime=1;

        for(int j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                {   
                 prime=0;
                 break;
                }
            }
        }   
                if(prime==1)
                {
                    printf("mersenne prime of %d= ",i);
                    int a=pow(2,i)-1;
                 printf("%d\n",a);
                found=1;
                }
                if (found==0
                ){
                    printf("no prime\n");
                }

            
     
        
    }
}