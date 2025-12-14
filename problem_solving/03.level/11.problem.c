//stop the loop ant 0 and skip negative values
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
       if(a[i]<0)
       {
           continue;
       }
       else if(a[i]==0)
       {
           break;
       }
       else
       {
           printf("%d",a[i]);
       }
    }
    return 0;
}