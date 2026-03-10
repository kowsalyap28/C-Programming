//count frequench of each number
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
        int count=1;
        if(visited[i]==1)
        continue;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                visited[j]=1;
            }
        }
    
    printf("%d occur-%dtimes\n",arr[i],count);
    }
}