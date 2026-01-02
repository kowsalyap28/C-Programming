//count repeated valueco
# include <stdio.h>
int main()
{
    int n1,count;
    scanf("%d",&n1);
    int a[n1],visited[n1];
    for(int i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
        visited[i]=0;                 //ini visti 0
    }
    for(int i=0;i<n1;i++)
    {
        if(visited[i]==1)            //if visit is 1 skip
        continue;
        int count=1;
        for(int j=i+1;j<n1;j++)
        {
            if(a[i]==a[j])
            {
              count++;
              visited[j]=1;
            }
        }
     printf("%d occur %d times\n",a[i],count);
    }

}