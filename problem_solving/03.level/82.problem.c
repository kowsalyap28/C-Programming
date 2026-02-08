//poduct  of array except itself
# include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],prefix[n],suffix[n];      //here prefix[i] is product of element from 0 to i-1,sufffix[i] is product of element from i+1to n-1
    for(int i=0;i<n;i++)                  
    {
       scanf("%d",&arr[i]);
    }
    prefix[0]=1;
    for(int i=1;i<n;i++)
    {
      prefix[i]=prefix[i-1]*arr[i-1];
    }
    suffix[n-1]=1;
    for(int i=n-2;i>=0;i--)
    {
        suffix[i]=suffix[i+1]*arr[i+1];
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",prefix[i]*suffix[i]);
    }
}