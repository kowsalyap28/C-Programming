# include <stdio.h>
#include <math.h>
void sum(int n)
{
    int a,b;
    a=0,b=cbrt(n);
   
   while(a<=b)
   {
    int csum=a*a*a+b*b*b;
     if(csum==n)
     {
     printf("True");
     return;
     }
     else if(csum<n)
     a++;
     else
     b--;
   }
   printf("False");
}
int main()
{
    int n;
    scanf("%d",&n);
    sum(n);
}