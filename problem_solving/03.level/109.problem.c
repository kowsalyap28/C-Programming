// check whether the array is even divisible or odd divisible or neither
// even nor odd divisible
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
    int ec = 0, oc = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
            ec++;
        else
            oc++;
    }
    if (ec > oc)
        printf("even divisible");
    else if (ec == oc)
        printf("neither even nor odd divisible");
    else
        printf("odd divisble");
}