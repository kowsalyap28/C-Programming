# include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n<=00)
    {
        printf("Invalid input");
    }
    for(int i=1;i<=n;i++)
    {
      for(int j=1;j<=i;j++)
      {
        printf("%d ",j*5);
      }
      printf("\n");
    }
}