#include <stdio.h>
#define  p printf
#define s scanf
int main()
{
int n,sum=0;
p("enter the number n:");
s("%d",&n);
for(int i=1;i<=n;i++)
{
if(n%i==0)
{
p("divisor =%d\n",i);
sum+=i;
}
}
p("sum=%d\n",sum);
if(n==sum)
p("equal number");
else
p("not equal no");
return 0;
}
