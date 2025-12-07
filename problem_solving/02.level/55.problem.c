// Fibonacci even number generator
# include <stdio.h>
int main()
{
    int n,count=0;
    scanf("%d",&n);
    if(n<=0)
    {
        printf("Invalid");
    }

    int a=0,b=1,c;
    for(int i=1;i<=n;i++)
    {
      if(a%2==0)
      {
        printf("%d ",a);
      }
      c=a+b;
      a=b;
      b=c;
    }
}

