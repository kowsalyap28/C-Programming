# include <stdio.h>
int main()
{
    int num,divisor;
    scanf("%d %d",&num,&divisor);
    if(divisor==0)
    {
        printf("error");
    }
    else if(num%divisor==0)
    {
      printf("the  number %d is divisible the divisor",num);
    }
    else{
        printf("num %d is not divisible by the divisor",num);
    }
}