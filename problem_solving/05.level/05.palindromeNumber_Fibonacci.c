// palindrome Number and Fibanacci series
#include <stdio.h>
void arm(int n)
{
  int rev=0,tn=n;
  while(tn!=0)
  {
    rev=rev*10+tn%10;
    tn/=10;
  }
  if(rev==n)
  {
    printf("%d is palindrome number\n",n);
  }
  else
  {
    printf("%d is not a palindrome number\n",n);
  }
}
void fibonacci(int num)
{
    int a=0,b=1,c;
    for(int i=1;i<=num;i++)
    {
       printf("%d ",a);
      c=a+b;
      a=b;
      b=c;
    }
}
int main()
{
   int n,num;
   scanf("%d %d",&n,&num);
   arm(n);
   fibonacci(num);
}