# include <stdio.h>
int main()
{
    float n,a,sum=0;
    int i;
    scanf("%f",&n);
    if(n<0)
    {
        printf("Invalid input");
    }
    else{
    for(i=1;i<=n;i++)
    {
        a=1.0/i;
        printf("%.2f ",a);
        sum+=a;
    }
    printf("\n");
    printf("%.2f",sum);
}
   
}