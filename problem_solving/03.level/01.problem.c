// sum of digits using array
#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n],sum=0;
    for(int i=1;i<=n;i++)
    {
       scanf("%d",&a[i]); 
    }
    for(int i=1;i<=n;i++)
   {
        sum=sum+a[i];
    }   
        printf("%d",sum);
    

    return 0;
}


