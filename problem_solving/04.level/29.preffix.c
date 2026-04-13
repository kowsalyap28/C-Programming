//print comman preffix
# include <stdio.h>
# include <string.h>
int main()
{
    char str1[100],str2[100];
    fgets(str1,100,stdin);
    fgets(str2,100,stdin);

    str1[strcspn(str1,"\n")]='\0';
    str2[strcspn(str2,"\n")]='\0';
    // int len=strlen(str1)+strlen(str2);
    
    int found=0;
    for(int i=0;str1[i]!='\0';i++)
    {
       if(str1[i]==str2[i])               //check the preffic are equal otherwise stop the loop
       {
       printf("%c",str1[i]);
       found=1;
       }
       else 
        break;
    }

     if(found==0)
        printf("NOT FOUND!!");
}