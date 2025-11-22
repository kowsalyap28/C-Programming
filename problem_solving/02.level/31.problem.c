# include <stdio.h>

int main()
{
   int a,digit;
   scanf("%d",&a);
   printf("enter a either 0 or 1 replace the value:"),
   scanf("%d",&digit);
   if(digit==0)
   {
       int n=a;
       while(n>0)
       {
       b=n%10;
       if(b==0)
       {
           b=1;
       }
       b/=10;
       }
   }
   else if(digit==1)
   {
       int n=a;
      while(n>0)
      {
       n=a%10;
       if(n==1)
       {
           n=0;
       }
       a/=10;
      }
   }
   else
   {
      printf("invalid input");
   }

    return 0;
}