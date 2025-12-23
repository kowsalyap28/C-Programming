// remove the middle digit
# include <stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    if(n%2==0)
    {
        int middle1=(n/2)-1,middle2=n/2;
        for(i=middle1;i<n-1;i++)            // i<n-1 ---we romove the digit at last 
        {
            a[i]=a[i+1];                   //sort and remove it
        }
      n--;                                 // n-- ---because after removing the last digit the index well be less than before
      for(i=middle2;i<n-1;i++)                
      {
        a[i]=a[i+1];
      }
     n--;
    }
    else{
        int middle=n/2;
      for(i=middle;i<n-1;i++)
      {
        a[i]=a[i+1];                       
      }
      n--;
    }

    for(i=0;i<n;i++)
    {
          printf("%d ",a[i]);
    }
}