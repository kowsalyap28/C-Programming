// swap up the two value using three varibles
# include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter the value for a:");
    scanf("%d",&a);
    printf("enter the value for b:");
    scanf("%d",&b);
    c=a;
    a=b;
    printf("a=%d ",a);
    b=c;
    printf("b=%d",b);
}