//Smallest word in a String
#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d",&n);
    char str[n];
    getchar();
    fgets(str,n,stdin);
    str[strcspn(str,"\n")]='\0';
    int min=100;
    char word[100];
    char pmin[100];
    int j=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]!=' ')
        {
            word[j++]=str[i];
        }
        else{
            word[j]='\0';
            if(j<min)
            {
                min=j;
                strcpy(pmin,word);
            }
            j=0;
        }
    
    }
    //for last word
    word[j]='\0';
            if(j<min)
            {
                min=j;
                strcpy(pmin,word);
            }
    printf("%s",pmin);
        
        return 0;
}