//move all vowels to the end
# include <stdio.h>
# include <string.h>
int main()
{
    char str[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
        continue;
        for(int j=i+1;str[j]!='\0';j++)
        {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
        {
           int tem=str[i];
           str[i]=str[j];
           str[j]=tem;
        }
        }
    }
    printf("%s",str);
}