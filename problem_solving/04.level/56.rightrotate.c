# include <stdio.h>
# include <string.h>
int main()
{
    char str[100],newstr[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    int k;
    scanf("%d",&k);
    int len=strlen(str);
    k=k%len;
    for(int i=0;str[i]!='\0';i++)
    {
        newstr[(i+k)%len]=str[i];
        newstr[len]='\0';
    }
    printf("%s",newstr);
}