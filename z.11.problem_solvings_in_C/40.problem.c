# include <stdio.h>
# include <math.h>
void main()
{
 int i,n,digit=0,sum=0,copy,rem;
 scanf("%d",&n);
 while(n!=0)
 {
  digit=n%10;
  n=n/10;
  digit++;
 }
 copy=n;
  while(n<=0)
  {
  sum=sum+pow(rem,digit);
  n=n/10;
  }

 if(sum==n)
{
  printf("armstrong number:");
}
else
{
  printf("not a armstrong number:");
}

}