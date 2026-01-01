//insert multiple values at end
# include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int value;
    scanf("%d",&value);
    int b[value];
    for(int i=0;i<value;i++)
    {
        scanf("%d",&b[i]);
    }
    int fn=n+value,c[n];
    for(int i=0;i<n;i++)
    {
        c[i]=a[i];
    }
    for(int i=0;i<value;i++)
    {
        c[n+i]=b[i];
    }
    for(int i=0;i<fn;i++)
    {
        printf("%d ",c[i]);
    }

}