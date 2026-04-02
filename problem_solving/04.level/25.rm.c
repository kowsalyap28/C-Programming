# include <stdio.h>
# include <string.h>
int main()
{
    char str[100];
    int vis[100]={0};
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    for(int i=0;str[i]!='\0';i++)
    {
          if(vis[i]==1)
          {
            continue;
          }
          for(int j=i+1;str[j]!='\0';j++)
          {
            if(str[i]==str[j])
            {
                vis[j]=1;
            }
          }
          printf("%c",str[i]);
    }
}
