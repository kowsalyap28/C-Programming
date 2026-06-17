# include <stdio.h>
void removezero(int n,int arr[n])
{
   for(int i=0;i<n;i++)
   {
    if(arr[i]==0)
    {
        for(int j=i;j<n-1;j++)
        {
            arr[j]=arr[j+1];
        }
        i--;
        n--;
    }
   }
   for(int i=0;i<n;i++)
   {
    printf("%d ",arr[i]);
   }
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    removezero(n,arr);
}