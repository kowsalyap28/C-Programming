#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    scanf("%[^\n]", str);
    int length = strlen(str);

    // 1-to print first and last char
    printf("first :%c last :%c ", str[0], str[length - 1]);
    printf("\n");

    // 2-replace all space with *
  for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            str[i] = '*';
        }
    }
    printf("modified: %s", str);
    printf("\n");

    // 3-print middle char
    if (length % 2 == 0)
        printf("middle: %c", str[(length / 2) - 1]);
    else
        printf("middle: %c", str[length / 2]);

printf("\n");

// count special char( not a LETTER , SPACE , DIGIT)

int splcharcount=0;
for(int i=0;str[i]!='\0';i++)
{
    if(!((str[i]>='a' && str[i]<='z')||
      (str[i]>='A' && str[i] <= 'Z')||
      (str[i]>='0' && str[i]<= '9')||
      (str[i]==' ')))
      {
        splcharcount++;
      }
      
}
printf("special char count: %d",splcharcount);
}
