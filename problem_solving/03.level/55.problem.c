//two sum
# include <stdio.h>
int main()
{
    int n1,n2,sum1,sum2,result;
    scanf("%d %d",&n1,&n2);
    int arr[n1],i,j,k;
    for(i=0;i<n1;i++)
    {
        scanf("%d",&arr[i]);
    }
    int arr2[n2];
    for(j=0;j<n2;j++)
    {
        scanf("%d",&arr2[j]);
    }
    int limit=(n1<n2) ? n1: n2;
    for(k=0;k<limit;k++)
    {
        int result=arr[k]+arr2[k];
        printf("%d ",result); 
    }
}