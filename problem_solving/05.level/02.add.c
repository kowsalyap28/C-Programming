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
// void check(int n)
// {
//    if(n%2==0)
//    {
//       printf("even\n");
//    }
//    else
//    printf("odd");
// }
// int main()
// {
//    int n;
//    for(int i=0;i<=5;i++)
//    {
//       scanf("%d",&n);
//       check(n);
//    }
// }

//Check positive negative
// void check(int n)
// {
//    if(n>0)
//    printf("positive");
//    else if(n==0)
//    printf("netural");
//    else
//    printf("negative");
// }
// int main()
// {
//    int n;
//    for(int i=0;i<=4;i++)
//    scanf("%d",&n);
//    check(n);
// }
//largest number

void largest(int a,int b,int c)
{
   if(a>b&&a>c)
   printf("l=%d",a);
   else if(b>a&&b>c)
   printf("l=%d",b);
   else if(c>a&&c>b)
   printf("l=%d",c);
}
int main()
{
   int a,b,c;
   scanf("%d %d %d",&a,&b,&c);
  largest(a,b,c);
}

