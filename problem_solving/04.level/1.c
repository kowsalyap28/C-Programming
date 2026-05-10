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
    int vis[n];
     int count=0;
    for(int i=0;i<n;i++)
    {
       
        if(vis[i]==1)
        continue;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
               count++;
               break;
            }
        }
    }
    printf("%d",count);
}