# include <stdio.h>
void main()
{
int i,n,multi=1;
printf("enter the number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    multi=multi*i;

}
printf("factorial =%d",multi);
}