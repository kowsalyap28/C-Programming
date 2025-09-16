// type conversion 
// double-->float-->int-->char(explict)
# include <stdio.h>
void main()
{
 double d;
 printf("enter the vlaue in double:");
 scanf("%lf",&d);
 printf("double=%lf\n",d);

 float f=(double)d;
 printf("float=%f\n",f);
  
 int a=(float)f;
 printf("integer=%d\n",a);

 char ch=(int)a;
 printf("character=%c\n",ch);

}



