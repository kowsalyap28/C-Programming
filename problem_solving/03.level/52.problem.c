//find greater value and print its index
# include <stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int max=a[0];
    int index=0;
    for(int i=0;i<n;i++)
    {
        if(max<a[i])
        {
          max=a[i];
          index=i;
        }
    }
    printf("%d",index);
}