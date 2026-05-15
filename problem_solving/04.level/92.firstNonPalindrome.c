//Find First Non-Palindrome Word
# include <stdio.h>
# include <string.h>
int main()
{
    char str[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';

    char words[100];
    int j=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]!=' ')
        {
           words[j++]=str[i];
        }
        else{
            words[j]='\0';
          int s=0;
          int len=j-1;
          while(s<len)
          {
             if(words[s]!=words[len])
             {
                 printf("%s",words);
                 return 0;
             }
             s++;
             len--;
          }
          j=0;
        }
    }
    printf("No words found");
}