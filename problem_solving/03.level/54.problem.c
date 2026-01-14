//find diff between product and sum of interger
# include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
     int product=1,sum=0;
    int tn=n,digit;
    while(tn!=0)
    {
        digit=tn%10;
        product*=digit;
        sum+=digit;
        tn/=10;
    }
    printf("%d\n",product);
    printf("%d\n",sum);
    int result=product-sum;
    printf("%d",result);
}