// swap up the two value using two variavbles
# include <stdio.h>
int main()
{
    int a,b;
    printf("enter te value for a:");
    scanf("%d",&a);
    printf("enter the value for b:");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a=%d\n",a);
    printf("b=%d",b);
}