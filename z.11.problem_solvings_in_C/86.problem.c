# include <stdio.h>
int main()
{
    int a[100],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("a[%d]=%d  ",i,a[i]);
    
    }

    printf("\n");
    int med=n/2;
    printf("a[%d]=%d",med,a[med]);


}