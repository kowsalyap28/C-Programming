// palindromic right angled trinangle
# include <stdio.h>
int main()
{
    int n,k=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int tn=k;
        for(int j=1;j<=i;j++)
        {
            printf("%d ",k);
            k++;
        }
        for(int j=k-2;j>=tn;j--)
        {
            printf("%d ",j);

        }
        printf("\n");
    }
}