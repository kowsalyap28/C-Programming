// 9.To print the negative elements and sum of negative elements in an array
# include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],k=0;
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            sum+=arr[i];
            printf("%d",arr[i]);

        }
    }
    printf("\n");
    printf("%d",sum);
}
 