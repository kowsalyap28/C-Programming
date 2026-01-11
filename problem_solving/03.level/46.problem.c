//missing number from 1 to n-1
# include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        int tem;
            if(arr[0]<arr[i])
            {
              tem=arr[0];
              arr[0]=arr[i];
              arr[i]=tem;
            }
    }
    int sum1=0;
    for(int i=1;i<=arr[0];i++)
    {
         sum1+=i;                     
    }
    int sum2=0;
    for(int i=0;i<n;i++)
    {
        sum2+=arr[i];
    }
    printf("%d",sum1-sum2);
}