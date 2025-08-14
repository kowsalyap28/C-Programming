// calculator

# include <stdio.h>
void main()
{
int a,b;
char operator;

printf("entre the value for a:");
scanf("%d",&a);

printf("entre the vlaue for b:");
scanf("%d",&b);

printf("entre the operator:");
scanf("\n%c",&operator);

if(operator=='+')
{

    printf("sum=%d",a+b);
}
else if(operator == '-')
{
    printf("difference=%d",a-b);
}
else if(operator=='*')
{
printf("product=%d",a*b);
}
else if(operator=='/')
{
    printf("product=%d",a/b);
}
else
{
    printf("invalid operator");
}

}