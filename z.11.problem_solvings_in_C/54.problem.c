# include <stdio.h>
int main()
{
    int day;
    scanf("%d",&day);
    if(day>=1&&day<=7)
    {
      if(day==1)
      {
        printf("sunday\n");
        printf("weekend or holiday");
      }
      else if(day==2)
      {
        printf("monday\n");
      printf("weekday");
      }
      else if(day==3)
      {
        printf("tuesday\n");
         printf("weekday");
      }
      else if(day==4)
      {
        printf("wednesday\n");
         printf("weekday");
      }
      else if(day==5)
      {
        printf("thursday\n");
         printf("weekday");
      }
      else if(day==6)
      {
        printf("friday\n");
         printf("weekday");
      }
      else 
      {
        printf("saturday\n");
         printf("weekday");
      }
    }
}