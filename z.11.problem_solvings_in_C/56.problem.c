# include <stdio.h>
int main()
{
int n;// n=no of hours worked by an employee in a week 
char gender;
scanf("%d",&n);
scanf(" %c",&gender);
if(n<0)
{
     printf("invalid input");
     return 0;
}

 if(n>0)

     if(n<=8)
     {
       if(gender=='M')
       {
          printf("salary=%d",n*80);
          
       }
       else if(gender=='F')
       {
          printf("salary=%d",n*60);
       }
       else
       {
          printf("invalid input!");
       }
     }
     if(n>8)
     {
          if(gender=='M')
          {
               printf("salary=%d",(8*80)+(n-8)*100);
          }
          else if(gender=='F')
          {
           printf("salary=%d",(8*60)+(n-8)*100);
          }
          else{
               printf("invalid input");
          }
     
    } 
    return 0;
  
}
 


  

