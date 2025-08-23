# include <stdio.h>
void main()
{
    float a,b;
    char op;

    printf("enter the value of a:");
    scanf("%f",&a);

    printf("enter the value of b:");
    scanf("%f",&b);

    printf("entre the operator:");
    scanf("\n%c",&op);

    switch(op)
    {

     case '+':
     printf("sum=%f",a+b);
     break;

     case '-':
     printf("diff=%f",a-b);
     break;

     case '*':
     printf("product=%f",a*b);
     break;


     case '/':
     printf("divid=%f",a/b);
     break;

     default:
     printf("invlaid operator");
    }


}