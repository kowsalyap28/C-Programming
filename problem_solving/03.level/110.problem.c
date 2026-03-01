// Find the second largest element in an array.
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    { 
        for (int j = i + 1; j < n; j++)     //remove dublicate
        {
            if (arr[i] == arr[j])
            {
               for(int k=j;k<n-1;k++)
               {
                   arr[k]=arr[k+1];
               }
               j--;
               n--;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        int tem;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                tem=arr[i];
                arr[i]=arr[j];
                arr[j]=tem;
            }
        }
    }
    printf("%d",arr[1]);
}