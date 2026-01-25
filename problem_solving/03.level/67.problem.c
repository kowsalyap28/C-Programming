//print mac of positve or negative
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
    int pc = 0, nc = 0, zc = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] < 0)
            nc++;
        else if (nums[i] > 0)
            pc++;
        else
            zc = 0;
    }
    if (pc >= nc)
      printf("%d",pc);
    else
    printf("%d",nc);

}