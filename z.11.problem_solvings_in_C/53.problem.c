# include <stdio.h>
int main()
{
    int month;
    scanf("%d",&month);
    if(month>=1&&month<=12)
    {
     if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
     {
      printf("31 days\n");
     }
      else if(month==2)
      {
        printf("28 days\n");
      }
      else
      {
        printf("30 days\n");
      }

      if(month>=1&&month<=3)
     
      {
        printf("quadrant 1");
      }
      
       else if(month>=4&&month<=6)
     
      {
        printf("quadrant 2");
      }
      
      else if(month>=7&&month<=9)
     
      {
        printf("quadrant 3");
      }
      
      else
     
      {
        printf("quadrant 4");
      }

    }
    else{
        printf("invlaid input");
    }
}
