//automorphic
# include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int square,tn,digit=0;
    square=n*n;
    tn=n;
    while(tn>0)
    {
        tn=tn/10;
        digit++;
    }
    int div=1;
    for(int i=0;i<digit;i++)
    {
     div=div*10;
    }
    if(square%div==n)
    {
        printf("automorphic no");
    }
    else
    printf("not automorphic number");
}