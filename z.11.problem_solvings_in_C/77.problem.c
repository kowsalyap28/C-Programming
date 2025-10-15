# include <stdio.h>
# include <math.h>
int main()
{
  float num,divisor;
  scanf("%f %f",&num,&divisor);
  if(divisor!=0)
  {
  if(fmod(num,divisor)==0)
  {
    printf("number is divisible");
  }
  else if(fmod(num,divisor)!=0)
  {
    printf("number is not divisible");
  }
  else
  {
    printf("invalid input");
  }  
}
else
{
  printf("error");
}
}