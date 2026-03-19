//longest word in sentence
# include <stdio.h>
# include <string.h>
int main()
{
    char str[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    int position=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
        {
            printf("%d",position);    //to prints the lenght of word before sapce    
            position=0;             //if it find new space reset postion as 0
        }
        else{
            position++;
        }
    }
    printf("\n");
    printf("%d ",position);        //lenght of last word
    
    
}