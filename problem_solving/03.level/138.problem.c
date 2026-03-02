//search an element
# include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    int se;  //se for search an element
    scanf("%d",&se);
    int found=0;
    for(int i=0;i<n;i++)
    {
      if(arr[i]==se)
       {
        found=1;
        break;
       }
    }
    if(found)
    {
        printf("%d is found",se);
    }
    else
    printf("not found!!");
}