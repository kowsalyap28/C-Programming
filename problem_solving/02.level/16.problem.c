
#include <stdio.h>

int main()
{
    int h;
    scanf("%d",&h);
   for(int i=1;i<=h;i++)
   {
       for(int j=0;j<i;j++)
       {
           printf("%c",'A'+j);
       }
       printf("\n");
   }
   
    return 0;
}
