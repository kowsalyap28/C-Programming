# include <stdio.h>
int main()
{
    float a,n,r,sum=0;   // a=starting number , n=number of terms,  r=common differenc  ,term =used to add value
   int i,term;
    scanf("%f %f %f",&a,&n,&r);
    if(n<0)
    {
        printf("0.00");
    }
    else
    {
        term=a;
        for(i=1;i<=n;i++)
        {
            printf("%d  ",term);
            term=term*r;
            sum+=term;
    
        
        }
        printf("\n");
        printf("%.2f",sum);
    }
   

}