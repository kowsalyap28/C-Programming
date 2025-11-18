# include <stdio.h>
int isprime(int n)
{
    int i;
    if(n<=1)
    {
        return 0;
    }
 for(i=2;i*i<=n;i++)
 {
    if(n%i==0)
    {
    return 0;
    }
    return 1;
}
}
int main()
{
    int num,n=2,i,j;
    scanf("%d",&num);
    
    for(i=1;i<=num;i++)

{
    for(j=1;j<=num;j++)
    {
    while(!isprime(n))
    
        n++;
    
    printf("%d ",n);
    n++; }
}
printf("\n");
}
