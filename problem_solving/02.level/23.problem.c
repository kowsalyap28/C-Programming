# include <stdio.h>
int isprime(int n)
{
    int i;
    if(n<=1)
    return 0;
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
        return 1;
    
}
int ispalindrome(int n)
{
    int rev=0;
   int  tem=n;
    while(tem>0)
    {
        rev=rev*10+tem%10;
        tem/=10;
    }
    return (rev==n);
    
}
int main()
{
int n,i;
scanf("%d",&n);
{
    if(n<=2)
    {
        printf("no prime palindrome exists");
        return 0;
    }
    for(i=n-1;i>=2;i--)
   if(isprime(i)&&ispalindrome(i)) 
   {
    printf("%d",i);
    return 0;
   }
}
return 0;
}