# include <stdio.h>
int main()
{
    int n,fact,b;
    int  result=0;
    scanf("%d",&n);
    int a=n;
    while(a>0)
    {
        fact=1;
        b=a%10;
    
        for(int i=1;i<=b;i++)
        {
           fact=fact*i;
        }
        
        
        result+=fact;
        a/=10;
    }
    printf("%d",result);
}