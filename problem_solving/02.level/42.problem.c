# include <stdio.h>
int main()
{
    
    float n,ps=0;
    scanf("%f",&n);
  if(n<0)
  {
    printf("%.0f is invalid input",n);
    return 0;
  }
    for(int i=1;i*i<=n;i++)
    {
        if(i*i ==n)
        {
            ps=1;
            break;
        }
    }
  if(ps==1)
    {
        int a=n;
        printf("%d is perfect square",a);
    }
    else
        {
            int a=n;
        printf("%d is not a perfect square",a);
    }
}