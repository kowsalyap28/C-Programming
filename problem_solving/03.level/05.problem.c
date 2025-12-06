//to find second largest number
#include <stdio.h>
#include <limits.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    int a[i];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int l=INT_MIN;   // l=largest
    int sl=INT_MIN;   //sl=second largest
    for(i=0;i<n;i++)
    {
        if(a[i]>l)
        l=a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!=l&&a[i]>sl)
        {
            sl=a[i];
        }
    }
    if(sl==INT_MIN)
    {
        printf("no second largest number");
    }
    else
    {
        printf("%d",sl);
    }

    return 0;
}