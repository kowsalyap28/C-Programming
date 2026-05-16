//to get input string and print substing between two indexes
# include <stdio.h>
# include <string.h>
int main()
{
    char str[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    int startindex,endindex;
    scanf("%d %d",&startindex,&endindex);
    for(int i=0;str[i]!='\0';i++)
    {
        if(i>=startindex)
        {
            printf("%c",str[i]);
            if(i==endindex)
            return 0;
        }
    }
    return 0;
}