# include <stdio.h>
int main()
{
 int n,copy,rev=0;
printf("enter the num:");
scanf("%d",&n);
copy=n;
while(copy>0)
{
    rev=rev*10;
  rev=rev+(copy%10);
  copy=copy/10;
}
printf("reverse=%d",rev);
}