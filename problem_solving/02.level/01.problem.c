#include <stdio.h>

int main()
{
  int n,i,prime,count=0;
  scanf("%d",&n);
  int next = n+1;
  while(count<5)
  {
      prime=1;
      if(next<2){
          prime=0;
         
      }
      else
      {
          for(i=2;i<next;i++)
          {
              if(next%i==0)
              {
                  prime=0;
              }
          }
      }
      if(prime==1)
      {
          printf("%d ",i);
          count++;
      }
      next++;
  }
  

    return 0;
}