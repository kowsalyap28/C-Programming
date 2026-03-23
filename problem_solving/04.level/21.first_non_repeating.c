// Find First Non-Repeating Character
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';
    for (int i = 0; str[i] != '\0'; i++)
    {
        int unique = 1;
        for (int j = 0; str[j] != '\0'; j++)
        {
            if (i != j && str[i] == str[j])
            {
                unique = 0;
                break;
            }
        }

        if (unique == 1)
        {
            printf("%c", str[i]);
        return 0;
        }
    }
    printf("no unique found!!");
}