// problem 5 : -- swamp of two integer variable (without using tird one)
# include <stdio.h>
void main()
{
    int a,b;
printf("Enter the value for a:\n");
scanf("%d",&a);
printf("Enter the vlaue for b:");
scanf("%d",&b);
 a = a+b ;   // if a= 4 b= 6     a= 4+6  =10
 b= a-b;     //                  b= 10-6 =4  
 a = a-b;     //                 a= 10-4 =6 
 printf("a=%d",a);
 printf("b=%d",b);
}     
