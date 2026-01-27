//smallest multiplier
# include <stdio.h>
int main()
{
 int numsSize;
 scanf("%d",&numsSize);
 int nums[numsSize];
 for(int i=0;i<numsSize;i++)
 {
    scanf("%d",&nums[i]);
 }
 for(int i=0;i<numsSize;i++)
 {
    if(nums[i]%2==0)                    //if it even it is multiple of 1 so return same n
    printf("%d ",nums[i]);   
    else
    printf("%d ",nums[i]*2);               //if it odd n*2 is smallest multipier
 }
}