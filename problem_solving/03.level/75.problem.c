//m*n
# include <stdio.h>
int main()
{
    int n1,n2,sum1=0,sum2=0;
    scanf("%d %d",&n1,n2);
    int arr[n1],arr2[n2];
    for(int i=0;i<n1;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n2;i++)
    {
        scanf("%d",&arr2[i]);
    }
    for(int i=0;i<n1;i++)
    {
        sum1+=arr[i];
    }
    for(int i=0;i<n2;i++)
    {
     sum2+=arr[n2];
    }
    printf("%d %d",sum1,sum2);
}