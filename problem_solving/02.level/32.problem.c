# include <stdio.h>
# include <math.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    if(n<=0)
    {
        while(1)
        {

            scanf("%d",&n);
            if(n>0)
            break;
        }
    }
    int odd=1;
    float sum=0.0;
    for(i=1;i<=n;i++)
    {
     float ans=(float)(odd*odd)/(odd*odd*odd);
        sum+=ans;
        
        odd+=2;
      
    }
    printf("%.2f",sum);
}