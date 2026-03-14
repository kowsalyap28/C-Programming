#include <stdio.h>
int main()
{
    char str[100];
    scanf("%[^\n]", str);        //%[^\n] reads the input until nextline (enter)
    int vowelcount = 0, constcount = 0, spacecount = 0, digitcount = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
    
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
                (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'))
                vowelcount++;
            else
                constcount++;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
              digitcount++;
        }
        else if(str[i]== ' ')
        {
            spacecount++;
        }
    }
    printf("vowelcount=%d \n constcount=%d \n digitcount=%d \n spacecount=%d",vowelcount,constcount,digitcount,spacecount);
}