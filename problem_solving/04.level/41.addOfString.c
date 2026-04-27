# include <stdio.h>
# include <string.h>
# include <stdlib.h>  // for atoi
int main()
{
    char str[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    char str1[100];
    fgets(str1,100,stdin);
    str1[strcspn(str1,"\n")]='\0';  
    printf("%d",atoi(str)+atoi(str1));
    
    return 0;
}