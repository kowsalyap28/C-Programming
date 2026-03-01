// merging array in descending order
#include <stdio.h>
int main()
{
    int n1;
    scanf("%d", &n1);
    int arr1[n1];
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    int n2;
    scanf("%d", &n2);
    int arr2[n2];
    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }
    for(int i=0;i<n2;i++){
        arr1[n1+i]=arr2[i];
    }
    for(int i=0;i<n1+n2;i++){
        int temp;
        for(int j=i+1;j<n1+n2;j++){
          if(arr1[i]<arr1[j])
          {
            temp=arr1[i];
            arr1[i]=arr1[j];
            arr1[j]=temp;
          }
        }
    }
    for(int i=0;i<n1+n2;i++)
    {
        printf("%d ",arr1[i]);
    }
}
