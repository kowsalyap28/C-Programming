// chunking an array
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
    int cs;
    scanf("%d", &cs); // get chunk size
    for (int i = 0; i < n; i++)
    {
        // start a chunk
        if (i % cs == 0)
        {
            if (i > 0)
            {
                printf("],\n["); // close previous and start new
            }
            else
                printf("["); // for first
        }
        printf("%d", arr[i]); // to print elements
        if ((i + 1) % cs != 0 && i != n - 1)
        {
            printf(",");
        }
    }
    printf("]"); // close last chunk;
    return 0;
}