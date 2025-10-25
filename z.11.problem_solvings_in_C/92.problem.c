#include <stdio.h>

int main()
{
    int row,i;
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
      for(int space=i;space<row;space++)
      {
          printf(" ");
      }
      for(int star=1;star<=i;star++)
      {
          printf("%d",star);
      }
      printf("\n");
    }

    return 0;
}