# include <stdio.h>
int main()
{
    int month;// enter the month in number
    scanf("%d",&month);
    if(month>12||month<=0)
    {
        printf("invalid input");
        return 0;
    }
if(month==1)
 {
   printf("january\n");
   printf("31 days");
 }
 else if(month==2)
 {
    printf("february\n");
    int year,leap_year;
    printf("enter the year:");
    scanf("%d",&year);
    if(year%100==0)
    {
        if(year%400==0)
        {
         printf("29 days");
        }
        else 
        {
         printf("28 days");
        }
    }
    else
    {
        if(year%4==0)
        {
            printf("29 days");
        }
        else{
            printf("28 days");
        }
    }
 }
 else if(month==3)
 {
   printf("march\n");
     printf("31 days");
 }
 else if(month==4)
 {
   printf("april\n");
    printf("30 days");
 }
 else if(month==5)
 {
   printf("May\n");
   printf("31 days");
 }
 else if(month==6)
 {
   printf("june\n");
    printf("30 days");
 }
 else if(month==7)
 {
   printf("july\n");
   printf("31 days");
 }
 else if(month==8)
 {
   printf("august\n");
   printf("31 days");
 }
else if(month==9)
 {
   printf("september\n");
    printf("30 days");
 }
 else if(month==10)
 {
   printf("october\n");
   printf("31 days");
 }
 else if(month==11)
 {
   printf("november\n");
   printf("30 days");
}
else if(month==12)
 {
   printf("december\n");
   printf("31 days");
 }
}