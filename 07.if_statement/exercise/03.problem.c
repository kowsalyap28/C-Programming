// to find greater value
# include <stdio.h>
void main()
{
int a,b,c;
 printf("entre the value for a:");
 scanf("%d",&a);

 printf("entre the value for b:");
 scanf("%d",&b);

 printf("entre the value for c:");
 scanf("%d",&c);

if(a>b)
{
    printf("greater value=%d", a);
}
else if(b>c)
{
    printf("greater value=%d",b);
}
else 
{
printf("greater value=%d",c);
}


}