//insert an element
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
    int position,value;
    scanf("%d %d",&position,&value);
    for(int i=n;i>position;i--)
    {
        a[i]=a[i-1];
    }
    a[position]=value;
    n++;
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }

}