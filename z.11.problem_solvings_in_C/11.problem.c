// wrire a programm to check positive or neagative
# include <stdio.h>
void main()
{
int a;
    printf("enter the vlaue for a:");
    scanf("%d",&a);
    if(a<0)
    {
        printf("a is negaftive:");
    }
    else if (a==0)
    {
     printf("a is zero");
    }
    else if (a>0)
    {
        printf("a is positive:");
    }
    else
    {
        printf("invalid opeator:");
    }


}