// write a proagramm to check leap year
# include <stdio.h>
void main()
{
int year;
printf("enter the year:");
scanf("%d",&year);
 
if(year%100 == 0)
{
    if(year%400==0)
    {
        printf("It is leap year:");
    }
    else
   {
    printf("not a leap year:");
   }
}
else
{

    if(year%4==0)
    {
        printf("It is a leap year:");
    }
    else
    {
        printf("not a leap year:");
    }
}

}