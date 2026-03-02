//44. Find Last Repeated Element
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
    for(int i=n-1;i>=0;i--)
    {
        for(int j=0;j<i;j++)
        {
            if(arr[i]==arr[j])
            {
                printf("%d",arr[i]);
                return 0;
            }
        }
    }
}