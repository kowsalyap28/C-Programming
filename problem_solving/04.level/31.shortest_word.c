# include <stdio.h>
# include <string.h>
int main()
{
    char str[100],words[100],shortest[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    int j=0,count=0,min=100;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]!=' ')
        {
          words[j]=str[i];
          j++;
          count++;
        }
        else 
        {
            words[j]='\0';
            if(count<min)
            {
               min=count;
               strcpy(shortest,words);
            }
                //reset 
                j=0;
                count=0;
        }
    }
    //for last word
    if(count<min)
    {
        min=count;
        strcpy(shortest,words);
    }
    printf("%s",shortest);
}