//how many numbers are smaller than current value
# include <stdio.h>
int main()
{
    int n,count;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        int count=0;
        for(int j=0;j<n;j++)
        {
            if(arr[j]<arr[i])
            count++;
        }
    printf("%d",count);
    }
}