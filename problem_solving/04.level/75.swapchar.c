// sort of char
# include <stdio.h>
# include <string.h>
int main()
{
    char str[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    for(int i=0;str[i]!='\0';i++)
    {
    for(int j=i+1;str[j]!='\0';j++)
    {
            if(str[i]>str[j])
            {
                int tem= str[i];
                str[i]=str[j];
                str[j]= tem;
            }
            }
    }
    printf("%s",str);
}
