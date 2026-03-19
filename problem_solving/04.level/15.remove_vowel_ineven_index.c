// remove elemten in even index if it vowel
#include <stdio.h>
int main()
{
    char str[100];
    scanf("%[^\n]", str);
    printf("og=%s", str);
    printf("\n");
    int pos = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            printf(" ");
            pos = 0;           //if it any space and reset the postion to 0
        }
        else
        {
            if (pos % 2 == 0)
            {
                if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
                    str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
                {
                    pos++;
                    continue;
                }
            }

            printf("%c", str[i]);
            pos++;
        }
    }
}