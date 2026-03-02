// 38. Write a C program to sum the second element, the last element, and
//  the second last element of an array. If the array does not have enough
//  elements to provide these values, handle the cases appropriately.
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
    int sum;
    if (n >= 2)
    {

        sum = arr[1] + arr[n - 2] + arr[n - 1];
    }
    printf("%d", sum);
}