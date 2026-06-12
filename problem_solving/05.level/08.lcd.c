//LCD
#include <stdio.h>
void lcd(int a,int b)
{
    int last;
    if(a<=b)
    last=a;
    else
    last=b;
    for(int i=1;i<=last;i++)
    {
        if(a%i==0 && b%i==0)
        {
        printf("lcd is=%d\n",i);
        break;
        }
    }
}

int main()
{
    int a,b;
    scanf("%d %d %d",&a,&b);
    lcd(a,b);
    
}