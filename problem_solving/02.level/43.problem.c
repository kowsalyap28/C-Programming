# include <stdio.h>
int main()
{
    float n;
    scanf("%d",&n);
    int  tn=(int)n;
    if(tn<0)
    {
        printf("%d is not a positive Number",tn);
    }
    int rev=0;
    while(tn>0)
    {
      rev=rev*10+tn%10;
      tn/=10;
    }
    printf("%d",rev);

}
                                                                                 