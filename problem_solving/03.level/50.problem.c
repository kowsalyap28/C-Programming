//two sum
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
    scanf("%d",&target);            //to get target sum
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==target)           //two sum to find sum is equat to target
            {
                printf("[%d] [%d]",arr[i],arr[j]);    //if found print the index
                return 0;                           //if found stop the loop
            }
        }
    }
    //or not found the equal sum
    printf("not found any pair");
}