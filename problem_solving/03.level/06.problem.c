//even no in new array
#include <stdio.h>

int main()
{
    int n,b,j=0;
    scanf("%d",&n);
    int a[n],array[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
   for(int i=0;i<n;i++)
   {
       if(a[i]%2==0)
       {
         array[j]=a[i];
         j++;
       }
   }
   for(int i=0;i<j;i++)
   {
       printf("%d ",array[i]);
   }
    return 0;
}