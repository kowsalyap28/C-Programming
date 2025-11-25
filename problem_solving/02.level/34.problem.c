# include <stdio.h>
int main()
{
    int n,a=0,b=1,c;
    scanf("%d",&n);
    if(n<0)
    {
        printf("Invalid input");
    }
    for(int i=1;i<=n;i++)
    {
     printf("%d",a);
     if(i!=n)
     printf(",");
    c=a+b;
    a=b;
    b=c;
    }
}