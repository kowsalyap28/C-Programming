# include <stdio.h>
# include <math.h> 
int main()
{
    int a,b,c;
  scanf("%d %d",&a,&b);
  char op;
  scanf(" %c",&op);
  if(op=='+')
  {
    printf("%d",a+b);
  }  
  else if(op=='-')
  {
    printf("%d",a-b);
  }  
   else if(op=='*')
  {
    printf("%d",a*b);
  }  
  else if(op=='/')
  {
    printf("%.2f",(float)a/b);
  }  
  else if(op=='^')
  {
    c=pow(a,b);
    printf("%d",c);
  }  
  else{
    printf("invlaid operator");
  }
}