# include <stdio.h>
# include <string.h>
int main()
{
    char str[100],words[100][100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    int j=0,k=0;
    for(int i=0;str[i]!='\0';i++)
    {
         if(str[i]!=' ')
         {
            words[k][j]=
            j++;
         }

    }
     
}