// remove the given index
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
    int ri; // index to remove
    scanf("%d", &ri);
    for (int i = 0; i < n; i++)
    {
        if (i == ri)
        {
            continue;
        }
        printf("%d ", arr[i]);
    }
}