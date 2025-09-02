// problem 4 : to calculate the SI(simple intrest) usinf float int 
# include <stdio.h>
void main()
{
float principal,rate,SI;
int time ;
printf("enter the Principal:\n");
scanf("%f",&principal);
printf("entre the rate:\n");
scanf("%f",&rate);
printf("enter the time in year:\n");
scanf("%d",&time);
SI = (principal * rate * time) /100;
printf("SI=%f",SI);
}