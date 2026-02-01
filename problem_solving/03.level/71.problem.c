//Product of Array Except Self – LC 238
# include <stdio.h>
int main()
{
    int numsSize;
    scanf("%d",&numsSize);
    int arr[numsSize];
    for(int i=0;i<numsSize;i++)
    {
        scanf("%d",&arr[i]);
    }
    int product=1;
    for(int i=0;i<numsSize;i++)
    {
        for(int j=0;j<i;j++)
        {
            product*=arr[i];
        }
        
    }
    for(int i=0;i<numsSize;i++)
    {
    printf("%d ",product);
    }
  
}