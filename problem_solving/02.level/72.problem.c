// finding the next palindrome
# include <stdio.h>
int main()
{
    int n,count=0;
    scanf("%d",&n);
    int a=n+1;
    while(1)
    {
   int tn=a;
   int rev=0;
   while(tn>0)
   {
      rev=rev*10+tn%10;
      tn/=10;
   }
   if(rev==a)
   {
    printf("%d ",rev);
    break;
   }
   a++;
}

}