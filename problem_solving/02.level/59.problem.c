# include <stdio.h>
int main()
{
    int n,digit,rev1=0,rev=0;
    scanf("%d",&n);
    int tn1=n;
    while(tn1>0)
    {
        rev1=rev1*10+tn1%10;
        tn1/=10;
    }
    int  tn=rev1;
    while(tn>0)
    {
        digit=tn%10;
       if(digit==9)
       {
        digit=0;
       }
       else
       digit=digit+1;
       rev=rev*10+digit;
       tn/=10;
    }
    printf("%d",rev);
}