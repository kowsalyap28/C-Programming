//insertion in assending order
# include <stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n+1];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int value,tem,j;
    scanf("%d",&value);
    a[n]=value;
    n++;
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
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}