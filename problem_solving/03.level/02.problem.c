// finding greater number in array
#include <stdio.h>

int main()
{
    int n,tem=0;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
       if(a[0]<a[i])
       {
           tem=a[0];
         a[0]=a[i];
          a[i]=tem;
       }
        
    }
    printf("%d",a[0]);
    return 0;
}