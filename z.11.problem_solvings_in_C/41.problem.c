# include <stdio.h>
int main()
{
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
if(a+b>c&&b+c>a&&c+a>b)
{
 if(a==b&&b==c&&c==a)
 {
    printf("isocleses triangle");
 }
 else if (a!=b&&b!=c&&c!=a)
 {
    printf("scalence triangle");
 }
 else
 {
    printf("isoclese trianble");
 }
}
else
{
    printf("not a triangle");
}
}