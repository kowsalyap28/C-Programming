# include <stdio.h>
int main()
{
    int n,count=0;
    scanf("%d",&n);
   
    while(count<5)
    { 
        int tn=n;
        int rev=0;
        while(tn>0)
        {
            rev=rev*10+tn%10;
            tn/=10;
        }
        if(rev==n)
        {
            printf("%d ",rev);
            count++;
        }
    
    n++;
    }
}