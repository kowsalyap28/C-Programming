//Insert multiple elements at a given position
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
    int n1;
    scanf("%d",&n1);
    int b[n1];
    for(int i=0;i<n1;i++)
    {
        scanf("%d",&b[i]);
    }
    int position;
    scanf("%d",&position);
    if (position < 0 || position > n)
    {
        printf("Invalid position");
        return 0;
    }
    int fn=n+n1,c[fn];
    for(int i=0;i<position;i++)            // copy first part of a
    {
        c[i]=a[i];
    }
    for(int i=0;i<n1;i++)                     // insert b elements
    {
        c[position+i]=b[i];
    }
    for(int i=position;i<n;i++)
    {
        c[n1+i]=a[i];            //copy remaining element
    }
    for(int i=0;i<fn;i++)
    {
        printf("%d",c[i]);
    }
    
     
}