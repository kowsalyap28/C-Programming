# include <stdio.h>
int main()
{
    int total_cost,members,age;
    float discounted_amount;
      scanf("%d %d",&age,&members);
    if(members>8)
      {
      if(age>18)
      {
        total_cost=200*members;
         discounted_amount=total_cost-((float)total_cost*0.11);
        printf("%.2f",discounted_amount);
      }
     else
     {
        total_cost=100*members;
       discounted_amount=total_cost-((float)total_cost*0.11);
        printf("%.2f",discounted_amount);

     }
     }
     else
     {
      if(age>18)
      {
        total_cost=200*members;
        printf("%d",total_cost);
      }
      else
      {
        total_cost=100*members;
        printf("%d",total_cost);
      }

     }
}