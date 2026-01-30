//Rotate array by k positions
# include <stdio.h>
int mai()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    int position=arr[k];      //fix the position;
    for(int i=0;i<=position-1;i++)
    {
        arr[i]=arr[i+1];
    }
    for(int i=0;i<n;i++)
    {
        printf("%d",&n);
    }


}