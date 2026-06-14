# include <stdio.h>
void sum(int n,int arr[100])
{
    int sum=0,max=arr[0];
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
  printf("sum=%d \n",sum);
  printf("largest element is %d",max);
  
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
    sum(n,arr);
    return 0;
}