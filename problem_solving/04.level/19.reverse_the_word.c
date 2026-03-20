# include <stdio.h>
# include <string.h>
int main()
{
char str[100];
fgets(str,100,stdin);
str[strcspn(str,"\n")]='\0';
char words[100];
int j=0;
for(int i=0;str[i]!='\0';i++)
{
    if(str[i]!=' ')
    {
        words[j]=str[i];
        j++;
     

    }
    else{
         for(int k=j-1;k>=0;k--)
        {
           printf("%c",words[k]);
        }
        printf(" ");  //to print space after one word reversed
        //reset
        j=0;
    }
}
for(int k=j-1;k>=0;k--)
{
  printf("%c",words[k]);
}

}