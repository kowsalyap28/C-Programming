// to find the longest palindrome word in a sentence.
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    char word[100];
    char palword[100];
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';
    int j=0;
    int maxcount=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]!=' ')
        {
            word[j++]=str[i];
        }
        else{

            word[j]='\0';
            int len=j-1;
            int i=0;
            int found=1;
            while(i<len)
            {
                 if(word[i]!=word[len])
                 {
                     found=0;
                     break;
                 }
                 i++;
                 len--;
            }
            if(found==1)
            {
                if(j>maxcount)
                {
                    maxcount=j;
                 strcpy(palword,word);
                }
            }
           
            j=0;
        }
    }
     word[j]='\0';
            int len=j-1;
            int i=0;
            int found=1;
            while(i<len)
            {
                 if(word[i]!=word[len])
                 {
                     found=0;
                     break;
                 }
                 i++;
                 len--;
            }
            if(found==1)
            {
                if(j>maxcount)
                {
                  maxcount=j;
                 strcpy(palword,word);
                }
            }

    printf("%s",palword);
}
    