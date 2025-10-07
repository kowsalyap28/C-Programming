# include <stdio.h>
int main()
{
  int weight,height,bmi;
  scanf("%d %d",&weight,&height);
  bmi=weight/(height*height);
   if(bmi<0||bmi>100)
  {
    printf("Invalid input");
  }  
  else if(bmi<18.5)
  {
    printf("underweight");
  }
  else if(bmi>25)
  {
    printf("normal");
  }
  else if(bmi<30)
  {
    printf("overweight");
  }
  else
  {
    printf("obese");
  }
}