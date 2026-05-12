//find all repeating char
# include <stdio.h>
# include <string.h>
int main()
{
    char str[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    int vis[256]={0};              //used to skip already visited value
    int fre[256]={0};              // used to count frequency of each char
    for(int i=0;str[i]!='\0';i++)
    {
        fre[str[i]]++;                 //count frequency of each
    }
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')                    //skip the space
        continue;

        if(vis[str[i]]==-1)
        {
            continue;                  //skip already visited value
        }

      if(fre[str[i]]>1)                     //duplicate is the count of greater than 1
      {
        printf("%c",str[i]);
        vis[str[i]]=-1;
      }
    }
}