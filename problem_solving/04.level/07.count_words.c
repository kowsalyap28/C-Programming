//count words
# include <stdio.h>
int main()
{
    char str[100];
    scanf("%[^\n]",str);
    int words,space=0;  
    for(int i=0;str[i]!='\0';i++)
    {
         if(str[i]==' ')
         {
            space++;          //to find wordscount=spacecount+1
         }
    }
    printf("%d",space+1);
}