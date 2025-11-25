# include <stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
   int  tn=n;
    while(tn>0)
    {  
        sum=sum+tn%10;
        tn/=10;

    }
    if(n%sum==0)
    {
        printf("%d is Harshad number",n);
    }
    else
    {
        printf("%d is Not Harshad number",n);
    }
}