//30. To print the number of occurance of a number in an array sum,
// product of an array.
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
    int tarnum;         //to check
    scanf("%d",&tarnum);
    int sum=0,count=0,product=1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==tarnum)
        {
          count++;
        }
        sum+=arr[i];
        product*=arr[i];
    }
    printf("%d \n%d \n%d",count,sum,product);
}