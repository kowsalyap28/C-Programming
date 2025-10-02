# include <stdio.h>
int main()
{
 int railway_T;
 scanf("%d",&railway_T);
 if(railway_T<0||railway_T>2359||railway_T%100>60)  // not in negative,not greater than 23:59,minute not greater than 59
 {

printf("invlaid input");    
return 0;   // if it invlaid stop the program here so we use return 0; here 
 }
 int hour,minute;
 hour=railway_T/100;   // railway_T divide by 100 because than only it wil give like 23.59
 minute=railway_T%100;  //  use of modulo to get the remainder than only it will add to min
 if(hour<0||hour>23)    // rail way time 0-23
 {
    printf("invalid iput");
 }
 if(hour==0)    // 0 starting  time of AM
 {  
    printf("12:%02dAM",minute);   // 02 for minute with leat couont of two digit
 }
else if(hour==12)
   {
    printf("12:%02dPM",minute);
   }
 else if(hour>=0&&hour<12)  
 {
   printf("%d:%02dAM",hour,minute);
 }
 else
 {
   printf("%d:%02dPM",hour-12,minute);
 }
}