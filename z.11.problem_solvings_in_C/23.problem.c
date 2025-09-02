// write a programm  to print the day of the week ( 1 sunday ,2 monday)
# include <stdio.h>
void main()
{
int day;

printf("entre the number of the day:");
scanf("%d",&day);
 
if(day>=1 && day <= 7)
{
    if(day==1)
    {
        printf("sunday");
    }
    else if(day==2)
    {
        printf("Monday");
    }
    else if(day==3)
    {
        printf("tuesday");
    }
    else if(day==4)
    {
        printf("Wednesday");
    }
    else if(day==5)
    {
        printf("thursday");
    }
    else if(day==6)
    {
        printf("Friday");
    }
    else if(day==7)
    {
        printf("Saturday");
    }
}
else
{
    printf("invalid input");
}
}