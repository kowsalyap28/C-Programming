//remove duplicate
# include <stdio.h>
int main()
{
    char str[100];
    scanf("%s",str);
    int vis[100]={0};
    for(int i=0;str[i]!='\0';i++)
    {
        if(vis[i]==1)
        continue;
        for(int j=i+1;str[j]!='\0';j++)
        {
          if(str[i]==str[j])
          {
            vis[j]=1;        // j (to remove duplicate)
          }
        }
         printf("%c",str[i]);
    }
}