//second smallest number
# include <stdio.h>
int main()
{
  int i,j,n,tem,count=0;
  scanf("%d",&n);
  int a[n];
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
        if(a[i]>a[j])
        {
          tem=a[i];
          a[i]=a[j];
          a[j]=tem;
        }
    }
  }
  for(i=0;i<n;i++)
  {
    count++;
    if(count==2)
    {
    printf("%d",a[i]);
    }
  }
  
}