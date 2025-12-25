# include <stdio.h>
int main()
{
    int n,digit=0,i;
    scanf("%d",&n);
    int tn=n;
    tn=tn/10;
    while(tn>0)
    {
        tn=tn%10;
        digit++;
    }
    tn=n;
    int sum=0;
    for(i=1;i<=digit-1;i++)
    {
      sum=sum+tn%10;
      tn/=10;
    }
    printf("%d",sum);

}