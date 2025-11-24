# include <stdio.h>
int main()
{
    int a,count=0,n;
    scanf("%d",&a);
    n=a;
    while(n>0)
    {
       n=n/10;
       count++;
    }
    printf("%d\n",count);
  if(count==5)
  {
    printf("%d is five digit number.",a);
  }
  else{
    printf("%d is not a five digit number it is %d digit number.",a,count);
  }
}