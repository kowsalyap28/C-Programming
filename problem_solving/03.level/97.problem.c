//Minimum maximum
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
    int tem;
    for(int i=0;i<n-1;i++)
    {
        tem=0;
        for(int j=i+1;j<n;j++)
        {
           if(arr[i]>arr[j])
           {
            tem=arr[i];
            arr[i]=arr[j];
            arr[j]=tem;
           } 
        }
    }
        printf("%d %d",arr[0],arr[n-1]);
       

}