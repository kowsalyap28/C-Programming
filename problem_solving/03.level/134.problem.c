//rotate array k time -right
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
    int k;
    scanf("%d",&k);  //k for how many times to rotate
    k=k%n;
    for(int t=0;t<k;t++)
    {
        int last=arr[n-1];
        for(int i=n-1;i>0;i--)
        {
            arr[i]=arr[i-1];
        }
        arr[0]=last;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}