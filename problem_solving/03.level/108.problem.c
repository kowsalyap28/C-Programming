// 59. find the index of the elements in the array when the sum of two
// elements is equal to target value. the output should be the first pair of
// index only.
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
    int target;
    scanf("%d",&target);
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==target)
            {
                printf("[%d, %d]",i,j);
                return 0;
            }
        }
    }
}