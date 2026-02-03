//gcd of even and odd sum
# include <stdio.h>
int main()
{
    int n,es=0,os=0;       //es=even sum ,os=odd sum
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        es+=i;
        else
        os+=i;
    }
    //to find gcd of es and os
    while(os!=0)
    {
        int tem=os;
        os=es%os;
        es=tem;
    }
    printf("%d",es);
}