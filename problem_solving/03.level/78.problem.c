//pivot index
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
    int totalsum=0,leftsum=0;
    for(int i=0;i<n;i++)
    {
        totalsum+=arr[i];
    }
    for(int i=0;i<n;i++)
    { 
        if(leftsum==totalsum-leftsum-arr[i])     //if pivot left sum==right sum ,here right sum =totalsum-leftsum-currentindex(arr[i])
        printf("index=%d",i);
        leftsum+=arr[i];
    }
}