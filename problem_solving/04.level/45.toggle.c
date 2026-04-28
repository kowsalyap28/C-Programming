# include <stdio.h>
# include <string.h>
# include <ctype.h>
int main()
{
    char str[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>='A'&&str[i]<='Z')
       {
          printf("%c",tolower(str[i])); 
       }
       else if(str[i]>='a'&& str[i]<='z')
       {
        printf("%c",toupper(str[i]));
       }
       else{
        printf("%c",str[i]);
       }
}
}