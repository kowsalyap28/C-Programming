//get the input from the user and delete the number
# include <stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int value,k;
    scanf("%d",&value);
    for(i=0;i<n;i++)
    {
    if(a[i]==value)
    {
        for(k=i;k<n-1;k++)
        {
            a[k]=a[k+1];
        }
        n--;
        i--;
    }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}