# include <stdio.h>
# include <math.h>
int main()
{
   int n;
   scanf("%d",&n);
   if(n%2==0)
   {
   for(int i=1;i<=n;i++)
   {
      if(i%2==0)
      {
        printf("%d ",i*i);
      }
    }
   }
   else
   {
   for(int j=1;j<=n;j++)
   {
      if(j%2!=0)
      {
        printf("%d ",j*j);
      }
    }
  }
   
}