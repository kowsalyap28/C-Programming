#include <stdio.h>
void square(int squ)
{
    squ=squ*squ;
    printf("%d\n",squ);
}
void count(int squ)
{
    int digit=0,tn=squ,sum=0;

    while(tn!=0)
    {
        sum=sum+tn%10;
        tn/=10;
        digit++;
    }
    printf("%d\n",digit);
    printf("%d",sum);
}
int main()
{
    int squ;
    scanf("%d",&squ);
    square(squ);
    count(squ);
}



