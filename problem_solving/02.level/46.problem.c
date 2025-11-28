# include <stdio.h>
int main()
{
    int n,step=0,a;
    scanf("%d",&n);
    while(n!=1)
    {
      if(n%2==0)
      {
        n=n/2;
      }
      else {
        n=(n*3)+1;
      }
     step++;
    }
    printf("%d",step);
}