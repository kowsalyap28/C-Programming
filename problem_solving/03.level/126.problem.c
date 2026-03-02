//move all 0
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
    int znc=0;
    for(int i=0;i<n;i++)
    {
       if(arr[i]!=0)
       {
       arr[znc]=arr[i];
       znc++;
       }
    }
    for(int i=0;i<znc;i++)
    {
        printf("%d ",arr[i]);
    }
}