//19. To Remove ODD numbers
# include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],k=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
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