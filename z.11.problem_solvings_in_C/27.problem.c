// write  a programm to solve the simple calcutor using swiltch case
# include <stdio.h>
void main()
{
    int num1,num2;
    char op;

    printf("enter the number1:");
    scanf("%d",&num1);
    printf("enter the number2:");
    scanf("%d",&num2);
    printf("enter the operator(+,-,*,/):");
    scanf(" %c",&op);

    switch(op)
    {
     case '+':
     printf("sum=%d",num1+num2);
     break;
     case '-':
     printf("difference=%d",num1-num2);
     break;
     case '*':
     printf("product=%d",num1*num2);
     break;
     case '/':
     printf("quotient=%d",num1/num2);
     break;
     default:
     printf("invlaid operator:");
     break;

    }

}
