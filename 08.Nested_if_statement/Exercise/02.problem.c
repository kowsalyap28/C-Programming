// leap year

# include <stdio.h>
void main()
{
int year;

// to get input from the user we use scanf

printf("entre the year:");
scanf("%d",&year);

if(year%100 == 0)
  {
    if(year%400 == 0)
     {
       printf("leap year");
     } 
    
    else
     {
        printf("Not a leap year");
     }


  }
else
{
   if(year%4 == 0)
    {
      printf("leap year");
    }
   else
    {
      printf("Not a leap year"); 
    }

}




}