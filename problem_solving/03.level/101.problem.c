// ranking without sorting  (1+number of elements larger than it)
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        int rank = 1; // init first rank is 1

        for (int j = 0; j < n; j++)
        {
            if (arr[i] < arr[j])              //count how many elements are larger than current value to find its rank
            {
                rank++;
            }
        }
        printf("%d-%d ",arr[i],rank);
    }
   
}
