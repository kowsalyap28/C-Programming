//separte even and odd
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
    int even[n],odd[n],ec=0,oc=0;      //ec=even count ,oc=odd count
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            even[ec]=a[i];
            ec++;
        }
        else{
            odd[oc]=a[i];
            oc++;
        }
    }
    for(int i=0;i<ec;i++)
    {
        printf("%d",even[i]);
    }
    printf("\n");
    for(int i=0;i<oc;i++)
    {
        printf("%d",odd[i]);
    }

}