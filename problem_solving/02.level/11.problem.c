# include <stdio.h>
int main()
{
    int m,n,i,j,sum;
    scanf("%d %d",&m,&n);
    if(m<0||n<0||m>n)
    {
        printf("invalid input");
    }
    for(i=m;i<=n;i++)
    { 
         sum=0;

        for(j=1;j<=i/2;j++)
        {

           if(i%j==0)
           {
            sum+=j;
           }
        
        }
    
    if(sum==i&&i!=0)
    {
        printf("%d is perfect number\n",i);
    }

}}




