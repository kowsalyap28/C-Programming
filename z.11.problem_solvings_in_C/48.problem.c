# include <stdio.h>
int main()
{
int U,B,S,T;            // U=no of units consumed ,B=bill amount before surcharge ,S=Surcharge amount,toatal bill amount after apply surcharge=T
scanf("%d",&U);
if(U>=0)
{
 if(U>=0&&U<=50)
 {
 printf("U=%d",U);
  B=0.50*U;
  printf("B=%d",B);
 }
 }
S=0.20*B;
printf("S=%d",S);
T=B+S;
printf("T=%d",T);
}