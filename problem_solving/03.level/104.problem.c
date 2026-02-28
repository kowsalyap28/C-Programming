// Swap the first element with the second-to-last element in the array.
// Swap the second element with the last element in the array.
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
    int temp;
    if (n >= 2)
    {
        temp = arr[0];
        arr[0] = arr[n - 2];
        arr[n - 2] = arr[0]; // swap of index 0 to index n-2 and vice versa

        temp = arr[1];
        arr[1] = arr[n - 1];
        arr[n - 1] = temp; // swap of index 1 to index n-1 and vice versa
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}