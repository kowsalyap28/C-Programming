//53. Print the sum of rst element, second element,last element,second
// last element in an array.
# include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(i==0||i==1||i==n-2||i==n-1)
        sum+=arr[i];
    }
    printf("%d",sum);
}