# include <stdio.h>
int main()
{
    int n,prime,sum=0,i;
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        prime=1;
        for(int j=2;j<=i/2;j++)

        if(i%j==0)
        {
          prime=0;  
          break; 
        }
    
    if(prime==1)
    {
        printf("%d ",i);
      sum+=i;
    }
    
}
 printf("\n");
    printf("%d",sum);
    return 0;
}