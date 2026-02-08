//product of array except self
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
    for(int i=0;i<n;i++)
    {
        int product1=1,product2=1;
        for(int j=0;j<i;j++)
        {
          product1=product1*arr[j];
        }
        for(int j=i+1;j<n;j++)
        {
            product2=product2*arr[j];
        }
        printf("%d ",product1*product2);
    }
}