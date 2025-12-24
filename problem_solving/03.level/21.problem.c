// Get a value from the user and if it matches any array element,
// print its index and value
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
    int indexvalue;
    scanf("%d",&indexvalue);
    for(int i=0;i<n;i++)
    {
        if(indexvalue==a[i])
        {
            printf("a[%d]=%d",i,a[i]);
        }
    }
}