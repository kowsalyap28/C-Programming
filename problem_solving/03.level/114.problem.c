// 54. To find the index of a given target element in the array and print all
// the elements except the target.
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
    int target;
    scanf("%d",&target);
    for(int i=0;i<n;i++){
        if(arr[i]==target)
        {
          printf("index=%d",i);
        }
    }
    printf("\n");
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=target)
        {
              printf("%d ",arr[i]);
        }
    }
 
}