#include <stdio.h>

int main()
{
    int a;
    int digit,rev=0,revans=0;
    scanf("%d",&a);
    if(a==0)
    {
        printf("1");
        return 0;
    }
  int tv=a;   // tv=temporary variable
    while(tv>0)
    {
        digit=tv%10;
        if(digit==0)
        {
            digit=1;
        }
        rev=rev*10+digit;
        tv/=10;
    }
    while(rev>0)
    {
       revans=revans*10+(rev%10);
       rev/=10;
    }
    printf("%d",revans);
    return 0;

}