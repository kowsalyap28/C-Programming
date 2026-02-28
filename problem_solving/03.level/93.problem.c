// target two sum
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
    int target, result[2];
    scanf("%d", &target); // get target value
    int found = 0;        // to check whether the value is found or not
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                result[0] = i;
                result[1] = j;
                found = 1;
                break;
            }
        }
    }
    if (found==0)
    {
        printf("Not found!!");
        return 0;
    }
    for (int i = 0; i < 2; i++)
    {
        printf("index=%d ", result[i]);
    }
}