//to find duplicate numbers
# include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],visited[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        visited[i]=0;
    }
    for(int i=0;i<n;i++)
    {
       
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            visited[j]=1;
        }
       if(visited[i]==1)
        printf("%d ",arr[i]);
    }
}