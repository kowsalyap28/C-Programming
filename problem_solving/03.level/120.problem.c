//48. Print the median of anarray after sorting
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
    for(int i=0;i<n-1;i++)
    {
        int tem;
        for(int j=i+1;j<n-1;j++)
        {
            if(arr[i]>arr[j])
            {
               tem=arr[i];
               arr[i]=arr[j];
               arr[j]=tem;
            }
        }
    }
   for(int i=0;i<n;i++)
   {
    printf("%d ",arr[i]);
   }
   printf("\n");
   if(n%2==0)
   printf("%d",(arr[n/2-1]+arr[n/2])/2);
   else
   printf("%d",arr[n/2]);
}