// prime number 
# include <stdio.h>
int main()
{
    int a,i,n,prime=1;
    scanf("%d",&a);
    for(i=2;i<=n;i++)
    {
        prime=0;
        if(n%i==0)
     printf("%d is not a prime number",i);
     break;
    }
    if(prime==1)
    {
        printf("%d is prime number");
    }
}