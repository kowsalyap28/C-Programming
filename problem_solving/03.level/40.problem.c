//counting frequency
# include <stdio.h>
int main()
{
    int n,i,count;
    scanf("%d",&n);
    int a[n],visited[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        visited[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        if(visited[i]==1)
        continue;
        count=0;
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
                visited[j]=1;
            }
        }

    
        printf("%d occur times\n",a[i],count);
    }

}