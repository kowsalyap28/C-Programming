// swaping first and last element
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
    int tem=a[0];  //swap a[0] and a[n-1]
    a[0]=a[n-1];
    a[n-1]=tem; 
    for(i=0;i<n;i++)
    {
         printf("%d ",a[i]);
    }
}