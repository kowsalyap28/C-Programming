#include <stdio.h>

int main()
{
   int group,n;
   long long handshake=0;
   scanf("%d",&group);
   for(int i=1;i<=group;i++)
   {
       scanf("%d",&n);
       handshake=handshake+n*(n-1)/2;

   }
  printf("%lld",handshake);
    return 0;
}
