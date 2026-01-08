//rotate array to right one position
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
    int last=arr[n-1];      //fix last element
    for(int i=n-2;i>=0;i--)
    {
        arr[i+1]=arr[i];         //rotate element to right
    }
    arr[0]=last;       //set last element at first
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}