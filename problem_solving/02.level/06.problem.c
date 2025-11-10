# include <stdio.h>
int main()
{
int year;
int leapyearcount=0,nonleapyearcount=0;
scanf("%d",&year);
if((year%100!=0&&year%4==0)||(year%400==0))
{
    printf("%d is leap year\n",year);
}
else{
    printf("%d is not a leap year\n",year);
}
for(int i=year+1;i<=year+10;i++)
{
   if((i%100!=0&&i%4==0)||(i%400==0))
{
    printf("%d is leap year\n",i);
    leapyearcount++;
}
else{
    printf("%d is not a leap year\n",i);
    nonleapyearcount++;
} 
}
printf("%d t0 %d\n",year+1,year+10);
printf("%d\n",leapyearcount);
printf("%d\n",nonleapyearcount);

return 0;
}