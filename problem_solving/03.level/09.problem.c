//Pivot index
#include <stdio.h>

int main()
{
  int n;
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  for(int i=0;i<n;i++)
  {
      int sum1=0,sum2=0;
          for(int j=0;j<i;j++)
          {
              sum1=sum1+a[i];
          }
          for(int j=i+1;j<n;j++)
          {
              sum2=sum2+a[i];
          }
      if(sum1==sum2)
      {
          printf("%d",a[i]);
      }
  }
 
    return 0;
}