# include <stdio.h>
int main()
{
    int n,rev=0;
    scanf("%d",&n);
   int  tn=n;
    while(tn>0)
    {
      rev=rev*10+tn%10;
      tn/=10;
    }
    if(rev==n)
    {
    printf("%d is a Palindrome",n);
    }
    else{
    printf("%d is Not a Palindrome",n);
    }
}