# include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int value;
    scanf("%d",&value);
    int rev=0,tn=n;
    while(tn>0)
    {
        int digit=tn%10;
        if(value==1)
        {
        if(digit==1)
        {
            digit=0;
    
        }
       
        }
        else if(value==0)
        {
        if(digit==0)
        {
            digit=1;
    
        }
       
        }

            rev=rev*10+digit;
        
        tn=tn/10;
    }

     int result=0;
     int temn=rev;
     while(temn>0)
     {
        result=result*10+temn%10;
        temn/=10;
     }
     printf("%d",result);

}