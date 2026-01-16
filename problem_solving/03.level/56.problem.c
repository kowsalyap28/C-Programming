//product of max 3 number
# include <stdio.h>
int main()
{
   int nums;
   scanf("%d",&nums);
   int numsSize[nums];
   for(int i=0;i<nums;i++)
   {
    scanf("%d",&numsSize[i]);
   }
   long product=1;
    for(int i=0;i<nums;i++)
    {
        int tem;
      for(int j=i+1;j<nums;j++)
      {
      if(numsSize[i]<numsSize[j])
      {
        tem=numsSize[i];
        numsSize[i]=numsSize[j];
        numsSize[j]=tem;
      }
    }
    }
    for(int j=0;j<3;j++)
    {
        printf("%d ",numsSize[j]);
        product=product*numsSize[j];
    }
    printf("%d",product);
}
