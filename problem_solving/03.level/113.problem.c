// less than target
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
    int target;
    scanf("%d", &target);
    for (int i = 0; i < n; i++)
    {
        int temp;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < target && (i == 0 || arr[i] != arr[i - 1]))
        {
            printf("%d ", arr[i]);
        }
    }
}