
#include <stdio.h>

int main()
{
  int nt,i=2;
  scanf("%d",&nt);
  int term=1;
  printf("%d ",term);
  for(i=2;i<=nt;i++)
  {
      term=term+i;
      printf("%d",term);
  }

    return 0;
}
