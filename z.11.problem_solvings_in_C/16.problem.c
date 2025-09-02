// write a programm to ckeck positive negative or add in nested if statement 
# include <stdio.h>
int main()
{
int a;
printf("enter the value for a:");
scanf("%d",&a);
if(a>=0)
{
    if(a==0)
    {
        printf("a is zero : ");
    }
    else
    {
        printf("a is positive");
    }
}
else
{
    if(a<0)
    {
        printf("a is negative:");
    }
    else
    {
        printf("invalid operator:");
    }
}

}