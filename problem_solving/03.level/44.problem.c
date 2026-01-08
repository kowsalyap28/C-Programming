//rotate an array to the left by one position
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
    int first=arr[0];          //fix first element
    for(int i=0;i<n-1;i++)
    {
        arr[i]=arr[i+1];        //shift elements left
    }
    arr[n-1]=first;             //set first element at last
   for(int i=0;i<n;i++)
   {
    printf("%d ",arr[i]);
   }
    
}