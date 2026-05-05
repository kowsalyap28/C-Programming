//frequency of given char
# include <stdio.h>
# include <string.h>
int main()
{
    char str[100];
    fgets(str,100,stdin);                //get input
    str[strcspn(str,"\n")]='\0';         
    char fn;
    scanf(" %c",&fn);           //getcharto check
    int count=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==fn)
        count++;
    }
    printf("Frequency of %c-%d ",fn,count);
}