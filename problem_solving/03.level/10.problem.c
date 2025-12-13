//size and length
#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
        printf("%zu",sizeof(a));
        printf("\n");
        printf("%d",sizeof(a)/sizeof(a[0]));   

    return 0;
}