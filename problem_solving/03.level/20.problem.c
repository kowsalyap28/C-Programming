//identify the given idex
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
    int index;                        // the index we want to get input and print the output of the index
    scanf("%d",&index);
    for(i=0;i<n;i++)
    {
    if(i==index)
    {
        printf("%d",a[i]);
    }
    }

}
