// ranking with sorting method
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n], arr1[n]; // arr1 for sorting to find rank
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        arr1[i] = arr[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        int tem;
        for (int j = i + 1; j < n; j++)
        {
            if (arr1[i] > arr1[j])
            {
                tem = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = tem;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        int rank = 1;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] < arr[j])
                rank++;
        }
        printf("%d-%d\n", arr[i], rank);
    }
}