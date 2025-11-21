#include <stdio.h>

int main()
{
   int nt,it,term=1;
   scanf("%d %d",&it,&nt);
  while(term<=nt)
  {
      printf("%d ",it);
      it=it*2;
      term++;
  }
return 0;
}