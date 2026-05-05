//Check if the string contains only digits
# include <stdio.h>
# include <string.h>
int main()
{
    char str[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    int found=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(!(str[i]>='0' && str[i] <='9'))
        {
            found=1;
        }
    }
    if(found==0)
    {
        printf("yes");
    }
    else if(found==1 && strlen(str)>0)
    {
        printf("No");
    }
}