#include <stdio.h>

int main()
{
    int a,product=1,sum=0,n;
    scanf("%d",&a);
   while(a>0)
   {
       
       n=a%10;
       if(n%2==0)
       {
           product=product*n;
          
       }
       if(n%2==1)
       {
           sum=sum+n;
          
       }
       a=a/10;
   }
       
        printf("even=%d\n",product);
         printf("odd=%d",sum);
   
    return 0;
}