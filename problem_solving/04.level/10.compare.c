// Compare Two Strings (without strcmp())
# include <stdio.h>
int main()
{
    char str1[100],str2[100];
    int equal =1;  //for checking
    scanf("%s %s",&str1,&str2);
    for(int i=0;str1[i]!='\0' && str2[i]!='\0';i++)      //to check until both come to end (ends with same length and char)
    {
        if(str1[i]!=str2[i])             //if any one is not equal end the loop
        equal=0;
        break;
    }
    if(equal==1)
    {
        printf("str1 :%s   is equal to   str2 :%s",str1,str2);
    }
    else{
        printf("str1 :%s   not equal to   str2 :%s",str1,str2);
    }
    
}