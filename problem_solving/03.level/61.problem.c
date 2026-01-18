//missing number from 1 to n
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
    int exsum=n*(n+1)/2;
    int   ac=0;     //exsum=expected sum  ac=actual sum
    for(int i=0;i<n;i++)
    {
        ac+=arr[i];
    }
    printf("%d",exsum-ac);
}