#include <stdio.h>

int main()
{
    int n,d;
    scanf("%d %d",&n,&d);
    int lower=n,upper=n;
    while(lower%d!=0)
    {
        lower--;
    }
    while(upper%d!=0)
    {
        upper++;
    }
    if((n-lower)<(upper-n))
    {
        printf("%d",lower);
    }
    else
    {
        printf("%d",upper);
    }
    return 0;
}