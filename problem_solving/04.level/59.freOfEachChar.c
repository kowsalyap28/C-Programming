// fre of each char 
# include <stdio.h>
# include <string.h>
int main()
{
    char str[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    int fre[256]={0};                            //256 - for upto ascii  value
    for(int i=0;str[i]!='\0';i++)
    {
       fre[str[i]]++;                                   
    }
    int vis[256]={0};
    for(int i=0;str[i]!='\0';i++)
    { 
        if(vis[str[i]]==-1)          //for  to skip repeating char
        continue;
        else
        {
            printf("%c-%d\n", str[i],fre[str[i]]);
            vis[str[i]]=-1;
        }
    }
}