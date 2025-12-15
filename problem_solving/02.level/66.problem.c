# include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n<2)
    {
        return 0;
    }
    for(int i=2;i<=n;i++)
    {
      int prime=1;
      for(int j=2;j*j<=i;j++)
      {
        if(i%j==0)
        {
            prime=0;
        }
      }
      if(prime==1)
      {
        for(int k=1;k<=i;k++)
        {
            printf("* ");
        }
       printf("\n");
      }
    }
}