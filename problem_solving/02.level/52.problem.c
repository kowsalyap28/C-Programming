# include <stdio.h>
int main()
{
    int n,sum=0,count=0;
    scanf("%d",&n);
   for(int i=1;count<n;i++)
   {
    if(i%2!=0)
    {
        sum=sum+i;
        printf("%d ",i);
        count++;
    }
}
    printf("\n");
    printf("%d",sum);
   
}