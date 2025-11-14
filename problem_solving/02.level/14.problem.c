# include <stdio.h>
# include <math.h>
int main()
{
    int n,mp=1;
    scanf("%d",&n);
    for(int p=2;p<=32;p++)
    {
        int m=pow(2,p)-1;
        if(n==m)
        {
        int prime=1;
        for(int i=2;i<=sqrt(m);i++)
        {
            if(m%i==0)
            {
              prime=0;
              break;
            }
        }
        if(prime==1)
        {
            printf("%d is mersenne prime",n);
            
        }
        else{
            printf("%d is not a prime number",n);
            mp=1;
            break;
        }
    }
}
if(mp==0)
{
    printf("%d is not a mersenne prime",n);
}

}
