# include <stdio.h>
int main()
{
    int n,product=1;
    scanf("%d",&n);
    int  tn=n;
    while(tn>0)
    {
        product*=tn%10;
        tn/=10;
    }
    if(product==0)
    {
        printf("Invalid input");
    }
    else{
    printf("%d",product);
    }
}