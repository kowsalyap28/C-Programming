// String Compression        (count consecutive char only)
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';

    int count = 1;
    for (int i = 0; str[i] != '\0'; i++)
    {

        if (str[i] == str[i + 1])
        {
            count++;
        }
        else
        {
            printf("%c%d", str[i], count);
            count = 1;
        }
    }
}