# include <stdio.h>
int main()
{
    int n,prime,digit=0;
    scanf("%d",&n);
    while(digit<5)
    {
     prime=1;
    if(n<2)
    {
    prime=0;
    }
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            prime=0;
        }
    }
    if(prime==1)
    {
        printf("%d\n",n);
        digit++;

    }
    n++;
  }
}