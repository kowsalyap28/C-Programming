//remove specific char
# include <stdio.h>
# include <string.h>
int main()
{
    char str[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
   
    char remchar[2];
    fgets(remchar,2,stdin);
  
    int l=strlen(str);
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i] == remchar[0])
        {
           for(int k=i;k<l-1;k++)
           {
              str[k]=str[k+1];
           }
           l--;
           i--;
        }
      
    }
    str[l]='\0';
  printf("%s",str);
}