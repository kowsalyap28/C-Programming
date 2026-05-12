//Merge two string alternately
# include <stdio.h>
# include <string.h>
int main()
{
    char str[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    char str1[100];
    fgets(str1,100,stdin);
    str1[strcspn(str1,"\n")]='\0';
    char newstr[200];
    int i=0,j=0,k=0;
    while(str[i]!='\0' && str1[j]!='\0')
    {
        newstr[k++]=str[i];
        newstr[k++]=str1[j];                 //store char alternately until length of str is = to str1
        i++;
        j++;
    } 
    //for remainging char in str
    while(str[i]!='\0')
    {
         newstr[k++]=str[i];
         i++;
    }
    //for remainging char in str
    while(str1[j]!='\0')
    {
         newstr[k++]=str1[j];
         j++;
    }
   newstr[k]='\0';
    printf("%s",newstr);
}