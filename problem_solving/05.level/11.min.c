# include <stdio.h>
void min(int n,int arr[100])
{
    int marr=arr[0];
     for(int i=0;i<n;i++)
    {
        if(marr>arr[i])
        {
            marr=arr[i];
        }
    }
    printf("%d",marr);
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
   min(n,arr);
}