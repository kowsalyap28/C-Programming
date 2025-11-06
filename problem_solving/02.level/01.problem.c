# include <stdio.h>
int main()
{
    int a,n;
    scanf("%d",&a);
   

    for(int i=2;i<a;i++)
    {
        if(a%i==0)
        {
            printf("Not a prime number");
            break;
        }
        else if(a==1||a==0)
        {
            printf("Not a prime number");
            break;
        }
        else
        {
            printf("%d is prime number",a);
        }
    }
    
}