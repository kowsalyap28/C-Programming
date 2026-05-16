// Check if a Substring Exists in a String
# include <stdio.h>
# include <string.h>
int main()
{
    char str[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
     
    char substr[100];
    fgets(substr,100,stdin);
    substr[strcspn(substr,"\n")]='\0';
     
    printf("%s\n",str);
    if(strstr(str,substr)!=0)
    {
        printf("%s is found",substr);
    }
    else{
        printf("%s is not found",substr);
    }
  return 0;
}

