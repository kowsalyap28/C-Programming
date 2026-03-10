//delete element from an array
# include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    int element,k=0;
    scanf("%d",&element);
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=element)
        { 
             arr[k]=arr[i];
             k++;
        }
    }
    for(int i=0;i<k;i++)
    {
        printf("%d ",arr[i]);
    }
}