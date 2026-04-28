// to print dublicate repeat time
# include <stdio.h>
# include <string.h>
int main()
{
    char str[2000];
    char words[20][100];             //used for separate each word
    int wordscount=0;                  //to count each word
    int dupcount[100]={0};           //for dup word cout
    int j=0;

    fgets(str,2000,stdin);
    str[strcspn(str,"\n")]='\0';

    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]!=' ')
        {
            words[wordscount][j]=str[i];                  //to store the word in str to words and store nu^th of word
            j++;
        }
        else
        {
            words[wordscount][j]='\0';    //make as last letter of the word
            wordscount++;
            j=0;
        }
    }
//for last word
words[wordscount][j]='\0';
wordscount++;

 // count duplicate word
 // wkt how many words ,run the loop untill it
 for(int i=0;i<wordscount;i++)
 {
    if(dupcount[i]==-1)
    continue;             //if already counted skip it

    dupcount[i]=1;
    for(int j=i+1;j<wordscount;j++)
    {
        if(strcmp(words[i],words[j])==0)
        {
            dupcount[i]++;             //iterate the duplicate count
            dupcount[j]=-1;            // for to skip the count of duplicate
        }
    }
 }

 // to print
 for(int i=0;i<wordscount;i++)
 {
    if(dupcount[i]==-1)
    continue;    

    if(dupcount[i]>1)
    {
        printf("%s-%d ",words[i],dupcount[i]);
    }
    else{
        printf("%s ",words[i]);
    }
 }
}