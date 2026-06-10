//armstrong and swap of two number
# include <stdio.h>
# include <math.h>
void arm(int n)
{
    int tn=n,count=0,sum=0,tm=n,digit;
    while(tn!=0)
    {
        tn=tn/10;
        count++;
    }
    while(tm!=0)
   {
     digit=tm%10;
     sum=sum+(int)pow(digit,count);
     tm/=10;
   }
   printf("%d",sum);
   if(n==sum)
   {
    printf("%d is armstrong number",n);
   }
   else
   {
    printf("%d is not an armstrong number",n);
   }

}
void swap(int a,int b)
{
    int c=a;
    a=b;
    b=c;
    printf("a=%d and b=%d",a,b);
}
int main()
{
    int n;
    scanf("%d",&n);
    arm(n);
    int a,b;
    scanf("%d %d",&a,&b);
    swap(a,b);
}
