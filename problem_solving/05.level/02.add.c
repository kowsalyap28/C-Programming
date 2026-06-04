# include <stdio.h>
// int add()
// {
//     int a=3,b=4,c=a+b; // if you not decalre the value in add(a,b) ,you must init the value here

//     return c;
// }
// int main()
// {
// printf("%d",add());
// }
// int sum(int k,int m)
// {
//    int v=m-k;
// }
// int main()
// {
// printf("%d",sum(11,28));
// }
// int square(int num1)
// {
//    int result=num1*num1;
// }
// int main()
// {
//    printf("%d",square(5));
// }
//to check even odd
void check(int n)
{
   if(n%2==0)
   {
      printf("even\n");
   }
   else
   printf("odd");
}
int main()
{
   int n;
   for(int i=0;i<=5;i++)
   {
      scanf("%d",&n);
      check(n);
   }
}