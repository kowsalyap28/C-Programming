//words and the count of words
# include <stdio.h>
# include <string.h>
int main()
{
    char str[100],words[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    int j=0,count=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]!=' ')
        {
            words[j]=str[i];
            j++;
            count++;
        }
        else{
            words[j]='\0';   //make (the word before the word) as last word
            printf("%s-%d",words,count);
            printf("\n");
            //reset
            j=0;
            count=0;
        }
    }
    //for last word
    words[j]='\0';
    printf("%s-%d",words,count);

}