# include <stdio.h>
void main()
{
int i=1,n,sum=0;
printf("entre the value of n:");
scanf("%d",&n);

do
{
 sum=sum+i;
 i++;
}
while(i<=n);
printf("sum=%d",sum);

}