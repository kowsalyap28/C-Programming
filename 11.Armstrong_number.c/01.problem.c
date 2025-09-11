# include <stdio.h>
# include <math.h>
int main()
{
int i=1, n,copy,digit=0,sum=0;
printf("enter the num");
scanf("%d",&n);
copy=n;
{
copy=copy%10;
digit++;
}
while(i>0)
{
 sum=sum+pow((copy%10),digit);
copy=copy/10;
}
if(sum==n)
{
    printf("it is armstrong number");
}
else
{
    printf("not a armstrong number");
}

}