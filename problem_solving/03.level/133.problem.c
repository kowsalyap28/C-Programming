// rotate array k times-left
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
    int k;
    scanf("%d", &k); // k (how many times to rotate)
    k = k % n; //after one complete rotation extra is equal to its madulo 
    for (int j = 1; j <= k; j++)
    {
        int last = arr[0];
        for (int i = 0; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        arr[n - 1] = last;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
