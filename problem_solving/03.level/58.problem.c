//sum of square numbers
# include <stdio.h>
# include <math.h>
int main()
{
  int  c;
  scanf("%d",&c);
  int b=sqrt(c),a=0;
  while(a<=b)
  {
  int sum=a*a+b*b;
  if(sum==c)
  {
  printf("true");
  return 0;
  }
  else if(sum<c)
  a++;
  else
  b--;
  }
  printf("false");
}