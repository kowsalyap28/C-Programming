#include <stdio.h>

int main()
{
  int child,adult,senior,total;
  scanf("%d %d %d",&child,&adult,&senior);
  total=child+adult+senior;
  if(total>0&&total<=5)
  {
      printf("%d",total*1000);
  }
  else if(total>5)
  {
     int a,b;
     a=total*1000;
     b=a-(a*0.1);
         printf("%d",b);
  }
  else
  {
      printf("invalid input");
  }
    return 0;
}