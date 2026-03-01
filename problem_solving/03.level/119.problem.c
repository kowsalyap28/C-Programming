// 49. Remove Prime Numbers
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (int i = 0; i < n; i++)
    {
        int prime = 1;
        if (arr[i] < 2)
            prime = 0;
        else
        {
            for (int j = 2; j * j <= arr[i]; j++)
            {
                if (arr[i] % j == 0)
                {
                    prime = 0;
                    break;
                }
            }
        }
        if (prime == 1)
        {
            for (int k = i; k < n - 1; k++)
            {
                arr[k] = arr[k + 1];
            }
            i--;
            n--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}