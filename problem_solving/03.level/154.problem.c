//17. C program to put even and odd elements of array in two separate array
# include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    int ec=0,oc=0,even[n],odd[n];
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            even[ec]=arr[i];
            ec++;
        }
        else{
            odd[oc]=arr[i];
            oc++;
        }
    }
    for(int i=0;i<ec;i++)
    {
        printf("%d ",even[i]);
    }
    printf("\n");
    for(int i=0;i<oc;i++)
    {
        printf("%d ",odd[i]);
    }
}
