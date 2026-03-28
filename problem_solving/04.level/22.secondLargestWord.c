#include <stdio.h>
#include <string.h>
int main()
{
    char str[100],words[100]; 
    char firstword[100],secondword[100];  
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';
    int count = 0, j = 0;
    int firmax = 0, secmax = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            words[j] = '\0'; // make it as last word
            printf("%s-%d ", words, count);
           

            if (firmax < count)
            {
                secmax = firmax;  
                strcpy(secondword,firstword);  //copy the word

                firmax = count;
                strcpy(firstword,words);
            }
            else if (count > secmax && count != firmax)
            {
                secmax = count;
                 strcpy(secondword,words);
            }
             count = 0; // reset count to 0
            j = 0;
        }
        else
        {
            words[j] = str[i];
            count++;
            j++;
        }
    }
    // for last word
    words[j]='\0';
    printf("%s-%d ", words, count); 
    printf("\n");
    // to print second largest
    if (firmax < count)
            {
                secmax = firmax;
                strcpy(secondword,firstword);

                firmax = count;
                strcpy(firstword,words);
            }
            else if (count > secmax && count != firmax)
            {
                secmax = count;
                 strcpy(secondword,words);
            }
   
    printf("second largest word is %s-%d",secondword,secmax);
}