//pattern printig printing with multiple of 5
# include <stdio.h>
int main()
{
 int n;
 scanf("%d",&n);
 if(n<0)
 {
    printf("Invaid");
 }
 else{
    for(int i=1;i<=n;i++)
    {
      for(int j=1;j<=i;j++)
      {
        printf("%d ",j*5);
      }
      printf("\n");
    }
 }
}