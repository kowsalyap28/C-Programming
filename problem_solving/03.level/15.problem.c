//sort the number in ascending order
# include <stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int a[n],tem;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
               tem=a[i];
               a[i]=a[j];
               a[j]=tem;

            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }

}
