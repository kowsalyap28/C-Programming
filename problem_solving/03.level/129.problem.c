// Count of array elements divisible by specific number.
# include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    int diel; //get divisible element
    scanf("%d",&diel);
    if(diel==0)
    {
        printf("invalid");
        return 0;
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%diel==0)
        count++;
    }
    printf("%d",count);
}