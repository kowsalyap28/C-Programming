//sort the number in descending order
# include <stdio.h>
int main()
{
    int n,i,j,tem;
    scanf("%d",&n);
    int a[n];                 //n=size of array
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
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