// to find the minimum number of elements that need to be
// added to the first array so that the sum of the elements in the first array
// matches the sum of the elements in the second array
#include <stdio.h>
int main()
{
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    int arr[n1], arr2[n2];
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &arr[i]);
        sum1 = sum1 + arr[i];
    }
    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
        sum2 += arr2[i];
    }
    printf("%d %d ", sum1, sum2);
     // for (required to add sum 1)
     int minvalue = sum2 - sum1; // for (required to add sum 1)
    if (sum1<sum2)
        printf("%d", minvalue);
    else
        printf("no values needed");
    return 0;
}