# include <stdio.h>
int main()
{
    int N,D,a;
    scanf("%d %d",&N,&D);
    if(N<=0||N>6)
    {
        printf("invlaid input");
        return 0;
    }
    else if(D<0)
    {
        printf("invalid input of player");
        return 0;

    }
    else if(N%2!=0)
    {    
       
        printf("players moves %d times forward",D*3);
    }
    else
    {
        printf("players moves %d times backward",D/3);
    }
}