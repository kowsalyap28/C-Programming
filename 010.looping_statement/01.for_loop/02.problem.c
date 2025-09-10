# include <stdio.h>
void main()
{
 int i,n,factorial=1;
 printf("enter the value for n:");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  factorial=factorial*i;
 }
printf("factorial=%d",factorial);
}