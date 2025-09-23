// prime number 
# include <stdio.h>
int main()
{
    int i,n,prime=1;
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
       prime=0;
        if(n%i==0)
     printf("%d is not a prime number",n);
     break;
    }
    if(n==1)
    {
        printf("%d is neither prime nor composite ",n);
    }
    else
    {
      prime==1;
     printf("%d is prime number",n);
    }
}