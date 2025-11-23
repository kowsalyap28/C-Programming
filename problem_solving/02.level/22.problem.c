# include <stdio.h>
int main()
{
    int range,rangeend,gap,i;
    scanf("%d %d %d",&range,&rangeend,&gap);
     if(range<2)
     printf("%d is not a prime",range);
     int prime;
   
    for(i=range;i<=rangeend;i++)
    {
     
     int prime=1;
    for(int j=2;j*j<=i;j++)
    {
        if(i%j==0)
        {
            prime=0;
        }
    }
   
    if(prime==1)
    {
        printf("%d ",i);
    }
   

}}