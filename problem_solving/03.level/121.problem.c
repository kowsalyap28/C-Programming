//47. Middle Element
# include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    if(n%2==0)
    printf("%d",(arr[n/2-1]+arr[n/2])/2);
    else
    printf("%d",arr[n/2]);
}