# include <stdio.h>
int main()
{
int sn=32,n,attempt;

for(int i=1;i<=7;i++)
{
    attempt=i;
    scanf("%d",&n);
    if(attempt>7)
    {
        printf("you loose");
    }
    if(n<=0||n>=100)
    {
        attempt=i;
         printf("attempt=%d\n",attempt);
        printf("invalid input\n");
        printf("your input must be the limit between 1-100\n");
    
    }
    else if(n<sn)
    {
        printf("attempt=%d\n",attempt);
        printf("too low\n");
    }
        else if(n>sn)
    {
        printf("attempt=%d\n",attempt);
        printf("too high\n");
    }
        else if(n==sn)
    {
        printf("attempt=%d\n",attempt);
        printf("you win\n");
        break;
    
    }
    else{
        printf("invalid input");
    }
    
}
return 0;
}