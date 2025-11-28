# include <stdio.h>
int main()
{
   int n,i,sum=0; 
   scanf("%d",&n);
   if(n<=0)
   {
    printf("%d is an Invalid number",n);
    return 0;
   }
   for(i=2;i<=n;i++)
   {
    if(i%2==0)
    {
        sum=sum+i;
    }
   }
   printf("%d",sum);
}