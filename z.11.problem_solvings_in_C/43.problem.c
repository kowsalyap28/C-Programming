# include <stdio.h>
int main()
{
int P,L,C,S;
printf("enter the value for C and S:");
scanf("%d %d",&C,&S);
P=S-C;
printf("P=%d\n",P);
  if(P>0)
  {
    printf("Result:Profit");
  }
 else if(P<0)
 {
  printf("Result:Loss");
 }
 else
 {
  printf("Result:Break-even");
 }
}  
