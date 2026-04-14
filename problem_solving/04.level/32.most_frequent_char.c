//most frequent char
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';
    int max = 0;
    char vis[100] = {0};
    char fre;

    for (int i = 0; str[i] != '\0'; i++)
    {
        int count = 0;

        if (vis[i] == 1)
            continue;
        if (str[i]==' ')
        continue;
        for (int j = i + 1; str[j] != '\0'; j++)
        {
            if (str[i] == str[j])
            {
                count++;
                vis[j] = 1;
            }
        }

        if (count > max)
        {
           
            max = count;
            fre=str[i];
        }
    }
    printf("maxf req char=%c",fre);
}