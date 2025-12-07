# include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int tn=n,digit=0;
    while(tn>0)
    {
        tn=tn/10;
        digit++;
    }
    tn=n;
    tn/=10;
   int  sum=0;
        for(int i=1;i<digit-1;i++)
        {
        
            sum=sum+tn%10;
            tn/=10;
        } 
        
        printf("%d",sum);
        
   return 0; 
}