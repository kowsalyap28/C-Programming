// The odd factorial quest
# include <stdio.h>
int main()
{
    int n,a,fact=1;
    scanf("%d",&n);
    if(n%2!=0&&n>0)
    {
        for(int i=1;i<=n;i++)
        {
         fact=fact*(i+1);
        }
    printf("%d",fact);
    }
}
 
