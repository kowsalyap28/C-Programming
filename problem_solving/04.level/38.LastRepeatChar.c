// last repeat
# include <stdio.h>
# include <string.h>
int main()
{
    char str[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    char word[100];
    int vis[256]={0};
    for(int i=strlen(str)-1;i>=0;i--)
    {
        if(str[i]==' ')
        continue ;
     if(vis[str[i]]==1)
     {
        printf("%c",str[i]);
        return 0;
     }
     vis[str[i]]=1;
    }
    printf("-1");
    return 0;
}