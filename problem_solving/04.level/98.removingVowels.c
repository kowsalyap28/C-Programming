//removing vowels in a sentence
# include <stdio.h>
# include <string.h>
# include <ctype.h>
int main()
{
    char str[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    int len=strlen(str);
    for(int i=0;str[i]!='\0';i++)
    {
          char ch=tolower(str[i]);
          if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
          {
              for(int j=i;str[j]!='\0';j++)
              {
                str[j]=str[j+1];
              }
              i--;
              len--;
          }
    }
    printf("%s",str);
}