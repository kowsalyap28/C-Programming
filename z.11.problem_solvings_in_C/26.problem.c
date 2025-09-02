// sum of digits
# include <stdio.h>
void main()
{
int n,sum=0;
printf("entre the value of n:");
scanf("%d",&n);
while(n>0)
{
    sum=sum+(n%10);
    n=n/10;
}
printf("sum of digits=%d",sum);

}