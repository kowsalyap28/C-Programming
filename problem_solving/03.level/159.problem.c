//chunking
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
    int cs;
    scanf("%d",&cs);
    for(int i=0;i<n;i++)
    {
        if(i%cs==0)
        {
            if(i>0)
            {
                printf("], \n[");
            }
            else
            printf("[");
        }
        printf("%d",arr[i]);
        if((i+1)%cs != 0 && i!=n-1)
        {
            printf(",");
        }
    }
    printf("]");
}
//to print all unique elements in an array.
# include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],vis[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        vis[i]=0;
    }
 
    for(int i=0;i<n;i++)
    {
     int count=0;
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        if(count==1)
        printf("%d",arr[i]);
      
    }
   
}
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
    for(int i=0;i<n/2;i++)
    {
        int tem=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=tem;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
