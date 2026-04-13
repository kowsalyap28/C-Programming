# include <stdio.h>
# include <string.h>
int main()
{
    char s1[100],s2[100];

    fgets(s1,100,stdin);
    fgets(s2,100,stdin);
    s1[strcspn(s1,"\n")]='\0';
    s2[strcspn(s2,"\n")]='\0';

    if(strlen(s1)!=strlen(s2))
    return 0;

    char s3[200];

    strcpy(s3,s1);            //copy s1 in s3
   
    strcat(s3,s1);           //s1+s1  (to check s2 rotation is equal to s1)
    
   char *result = strstr(s3,s2); // to search s2 in s3
   if(result==NULL)
   printf("NOT A ROTATION");
   else
   printf("IT IS A ROTATION");

}