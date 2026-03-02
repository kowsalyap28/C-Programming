//46. Separate Positive and Negative Numbers
# include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int p[n],ne[n],pc=0,nc=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
        p[pc]=arr[i];       //p[pc] if pc is replaced by i than it will be garbage so here pc is used and index start from 0
        pc++;
        }

    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
         ne[nc]=arr[i];
         nc++;
        }
    }
    for(int i=0;i<pc;i++)
    {
        printf("%d ",p[i]);
    }
    printf("\n");
     for(int i=0;i<nc;i++)
    {
        printf("%d ",ne[i]);
    }
}