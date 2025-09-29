# include <stdio.h>
# include <math.h>
int main()
{
 int a,root;
 scanf("%d",&a);
 if(a<0)
{
    printf("invalid input");
}
else
{
 root=(int)sqrt(a);
 if(root*root==a)
 {
    printf("%d is perfect square",a);
 }
 else
 {
    printf("%d is not perfect square",a);
 }

}
    
}