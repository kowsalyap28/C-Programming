//57. Sort the array and print even next odd
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
        int temp;
        for(int j=i+1;j<n;j++)
        {
          if(arr[i]>arr[j])
          {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
          }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            printf("%d ",arr[i]);
        }
    }
    printf("\n");
       for(int i=0;i<n;i++)
    {
        if(arr[i]%2==1)
        {
            printf("%d ",arr[i]);
        }
    }
}