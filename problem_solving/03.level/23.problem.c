//get the index value from the user and remove the index value's number
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
    int indexvalue,k;
    scanf("%d",&indexvalue);

    for(k=indexvalue;k<n-1;k++)
     {
           a[k]=a[k+1];
     }
     n--;
        
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
