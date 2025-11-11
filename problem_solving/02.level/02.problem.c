# include <stdio.h>
int main()
{
    int a,prime=1,i;
    scanf("%d",&a);
    if(a<=1)
    {
        printf("neither prime nor composite");
    }
    for(i=2;i<a;i++)
    {
        if(a%i==0)
        {
            prime=0;
            break;
        }
    }
    if(prime==1)
    {
        printf("%d is prime number ",a);
    }
    else{
        printf("composite number");
    }
    
    
    
       
    
}