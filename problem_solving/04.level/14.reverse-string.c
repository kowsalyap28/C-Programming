 # include <stdio.h>
 # include <string.h>
 int main()
 {
    char str[100];
    scanf("%[^\n]",str);
    int length = strlen(str)-1;
    for(int i=0;i<length;i++,length--)
    { 
        
        char tem=str[i];
        str[i]=str[length];
        str[length]=tem;
    }
    printf("%s",str);
    
 }