# include <stdio.h>
int main()
{
   int a,i,mul,n;
   scanf("%d",&a);
   scanf("%d",&n);
   for(i=1;i<=a;i++)
   {
     mul=i*n;
     printf("%dx%d=%d\n",i,n,mul);
   }


}