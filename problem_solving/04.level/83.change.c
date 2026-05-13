#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int freq[256] = {0};
    int length = 0;

    fgets(str, sizeof(str), stdin);

    // Count frequency
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] != '\n')
        {
            freq[(int)str[i]]++;
        }
    }

    // Calculate palindrome length
    for(int i = 0; i < 256; i++)
    {
        if(freq[i] % 2 == 0)
        {
            length += freq[i];
        }
        else
        {
            length += freq[i] - 1;
        }
    }

    // Add one odd character in center
    if(length < strlen(str) - 1)
    {
        length++;
    }

    printf("%d", length);

    return 0;
}