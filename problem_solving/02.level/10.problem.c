# include <stdio.h>
int main()
{
    int p,i,j,count=0;
    scanf("%d",&p);
    if(p<0)
    {
        printf("invalid input");
    }
    else
    for(i=1;i<=p;i++)
    {
        for(j=i+1;j<=p;j++)
        {
          count++;
        }
    }
    printf("%d",count);
    
}