
#include <stdio.h>
#include <math.h>

int main()
{
   int n,a,mn=0;
   scanf("%d",&n);
   for(int i=1;i<=31;i++)
   {
       if((pow(2,i)-1)==n)
       {
       
           mn=1;
           break;
       }
   }
  if(mn==0)
  {
      printf("not a mersenne number");
  }
  else
  {
      printf("mersenne number");
  }
    return 0;
}