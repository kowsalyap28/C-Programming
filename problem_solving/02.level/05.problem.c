# include <stdio.h>
int main()
{
    int a,sum=0;
    scanf("%d",&a);
    for(int i=1;i<a;i++)
    {
     if(a%i==0)
     {
        printf("%d ",i);
        sum=sum+i;
     }
    }
    printf("\n");
    printf("sum=%d\n",sum);
    if(sum>a)
    {
        printf("abudant number");
    }
    else{
        printf("not an abundant number");
    }
}