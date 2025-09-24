# include <stdio.h>
void main()
{
 int a,i=1,rev;
 scanf("%d",&a);
 while(i<=a)
 {
    rev=rev*10;
    rev=rev+(a%10);
    a/=10;
 }


printf("rev=%d",rev);

}