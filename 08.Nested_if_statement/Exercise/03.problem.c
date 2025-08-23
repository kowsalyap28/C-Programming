// checkinf a number is positive or negitive if positive check even or odd
# include <stdio.h>
void main()
{
int a;
printf("entre the a :");
scanf("%d",&a);

if(a>0)
{
    if(a%2==0)
    { 
        printf(" a is even");
    }
    else
    {
        printf("a is odd");
    }
}
else
{
    printf(" a is negative");
}
}