# include <stdio.h>
# include <math.h>
int main()
{
    int principal,rate,time;
    scanf("%d %d %d",&principal,&rate,&time);
      float compound_interest;
    compound_interest=(float)principal*(pow((1+((float)rate/100)),time))-principal;
    printf("%.2f",compound_interest);
    return 0;
} 