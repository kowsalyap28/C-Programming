// to remvoe duplicate words
# include <stdio.h>
# include <string.h>
int main()
{
    char str[2000];
    char words[20][100];
    int wordscount=0;
    char dup[100]={0};
    int j=0;

    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';

    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]!=' ')
        {
            words[wordscount][j]=str[i];
            j++;
        }
        else{
          words[wordscount][j]='\0';
          wordscount++;
          j=0;
        }
    }
    // for last word
     words[wordscount][j]='\0';
     wordscount++;

     for(int i=0;i<wordscount;i++)
     {
        if(dup[i]==-1)
        continue;
        dup[i]=1;
         for(int j=i+1;j<wordscount;j++)
         {
            if(strcmp(words[i],words[j])==0)
            {
                dup[j]=-1;
              
            }
         }
     }
     for(int i=0;i<wordscount;i++)
     {
        if(dup[i]!=-1)
        printf("%s ",words[i]);
     }
}

