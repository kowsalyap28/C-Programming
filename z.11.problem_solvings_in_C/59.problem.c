# include <stdio.h>
int main()
{
    int age;
    scanf("%d",&age);
    if(age<=0)
    {
  printf("invalid input");
  return 0;
    }
     if(age<=5)
    {
        printf("suggested food:vegetables or soft fruits");
    }
     else if(age>=13&&age<=18)
    {
        printf("suggested food:barger or pasta");
    }
     else if(age>=51)
    {
        printf("suggested food:soup and grilled fish");
    }
     else 
    {
        printf("suggested food:anything to eat");
    }
}