# include <stdio.h>
int main()
{
 int age,gender;
 char name[100];
 printf("enter the age,gender\n:");
 scanf("%d %d",&age,&gender);
 printf("enter the name:");
 scanf("%s",&name);
 if(gender==1||gender==2)
 {
    if(gender==1)
    {
    printf("\"Mr.%s\"\n");
    }
    else if(gender==2)
    {
    printf("\"Ms.%s\"\n");
    }
    else
    {
        printf("please type a valid gender");
    }
 }
 
if(age>18)
    {
    printf("Eligible");
    }
else if (age>0)
    {
     printf("Not eligible");   
    }
else
{
    printf("Salutation:None(or handele as per system design)");
}
}