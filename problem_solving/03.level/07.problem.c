//count of positive negative and zero
# include <stdio.h>
int main()
{
    int n,pc=0,nc=0,zc=0,i;//pc=positive  count ,nc=negative count ,zc=zero count
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {   
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            pc++;
        }
        else if(a[i]<0)
        {
            nc++;
        }
        else
        {
            zc++;
        }
    }
    printf("pc=%d nc=%d zc=%d",pc,nc,zc);
}