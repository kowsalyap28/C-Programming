//24.count total duplicate elements in array.
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
     int count=0;
   for(int i=0;i<n;i++)
   {
    if(visited[i]==1)
    continue;
    for(int j=i+1;j<n;j++)
    {
        if(arr[i]==arr[j])
        {
          visited[j]=1;
          count++;
        }
    }
   }
   if(count>0)
   printf("%d",count);
   else
   printf("no duplicate");
}