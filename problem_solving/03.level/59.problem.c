//Check if a number is the sum of two cubes
# include <stdio.h>
# include <math.h>
int main()
{
    int c;
    scanf("%d",&c);
    int a=0,b=cbrt(c);
    while(a<=b)
    {
        int sum=a*a*a+b*b*b;
        if(sum==c)
        {
            printf("true");
            return 0;
        }
        else if(sum<c)
        a++;
        else
        b--;
    }
   printf("false");
}