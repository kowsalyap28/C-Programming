//GCD
#include <stdio.h>
void gcd(int a,int b)
{
    int last;
    if(a<=b)
    last=a;
    else
    last=b;
    for(int i=last;i>=1;i--)
    {
        if(a%i==0 && b%i==0)
        {
        printf("gcd is=%d\n",i);
        break;
        }
    }
}
//perfect number
void perfect(int n)
{
    int sum=0;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        sum+=i;
    }
    if(sum==n)
    printf("%d is perfect number",n);
    else
    printf("%d is not a perfect number",n);
}
int main()
{
    int a,b,n;
    scanf("%d %d %d",&a,&b,&n);
    gcd(a,b);
    perfect(n);
}