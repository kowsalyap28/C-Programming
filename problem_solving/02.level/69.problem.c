 // the palindromic sum
 # include <stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    if(n<0)
    {
        return 0;
    }
    for(int i=1;i<=n;i++)
    {
        int tn=i,rev=0;
       while(tn>0)
       {
         rev=rev*10+tn%10;
        tn/=10;
       }
       if(rev==i)
       {
         sum=sum+i;
       }
    }
       printf("%d",sum);
    
}