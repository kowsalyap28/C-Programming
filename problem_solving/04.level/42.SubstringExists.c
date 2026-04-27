// Check if Substring Exists
# include <stdio.h>
# include <string.h>
int main()
{
    char str[100];
    fgets(str,100,stdin);      //file gets string ( where to store,  size , where to read from input=keyboard)
    str[strcspn(str,"\n")]='\0';    

    char sub[100];
    fgets(sub,100,stdin);
    sub[strcspn(sub,"\n")]='\0';

    char res[100];
    strcpy(res,sub);               //help to print in result

    if(strstr(str,sub)!=0)
     printf("%s is Found",res);
    else
     printf("%s is not Found !! ",res);

}
