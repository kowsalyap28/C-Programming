// // factorial of a number
// #include <stdio.h>
// void fact(int a)
// {
//     int fact = 1;
//     for (int i = 1; i <= a; i++)
//     {
//         fact = fact * i;
//     }
//     printf("factorial=%d", fact);
// }
// int main()
// {
//     int a;
//     scanf("%d",&a);
//     fact(a);
//     return 0;
// }

// prime or not 
# include <stdio.h>
void prime(int n)
{
   int prime=1;
   if(n<=1)
   prime=0;
   for(int i=2;i*i<=n;i++)
   {
      if(n%i==0)
      {
      prime=0;
      break;
      }
   }
   if(prime==1)
   {
    printf("%d is prime number",n);
   }
   else{
    printf("%d is not a prime number",n);
   }

}
int main()
{
    int n;
    scanf("%d",&n);
    prime(n);
}