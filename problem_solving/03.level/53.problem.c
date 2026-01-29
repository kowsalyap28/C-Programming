//sum of excatly four divisor
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
    int count=0;
    for(int i=1;i<=n;i++)
    {
        if(arr[i]%i==0)
        {
            count++;
        }
    }
    int sum;
    if(count==4)
    {
        sum=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]%i==0)
            {
                sum=sum+i;
            }
        }
    }
    printf("%d",sum);
    
}