// 27.to count frequency of each element in an array.
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n], visited[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        visited[n] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        if(visited[i]==1)
        continue;
        int count = 0;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                visited[j] = 1;
            }
        }

        printf("%d-%d", arr[i], count);
    }
}